#include "Map.h"

Map::Map(void) {

}

Map::~Map(void) {

}

void Map::Load(const string filename) {
  Unload();
  _currentMap = filename;
  string fullMapPath = "../Data/Media/Maps/" + filename;
  TiXmlDocument mapFile(fullMapPath);

  assert(mapFile.LoadFile() == true);

  // Getting dirty with some XML. This seems like a nicer
  // approach to loading maps, rather than parsing tet files.
  TiXmlElement* rootElem = NULL;
  TiXmlElement* lineElem = NULL;
  TiXmlElement* tileElem = NULL;
  TiXmlElement* dataElem = NULL;

  x = -1;
  y = -1;

  // <map> - Let's start parsing the map.
  rootElem = mapFile.FirstChildElement("map");
  assert(rootElem != NULL);
  if(rootElem) {
    // <line> - We want to tile one line at a time. line represents
    // the row we are tiling.
    lineElem = rootElem->FirstChildElement("line");
    assert(lineElem != NULL);
    while(lineElem) {
      y++;
      x = -1;

      // <tile> - Then we will select the tile. and increment x to keep tiling that row.
      tileElem = lineElem->FirstChildElement("tile");
      assert(tileElem != NULL);
      while(tileElem) {
        x++;
        _tile[x][y].SetTileXY(x * TILE_WIDTH, y * TILE_HEIGHT);

        // <tileTexture> - Apply a teture to the tile.
        dataElem = tileElem->FirstChildElement("tileTexture");
        assert(dataElem != NULL);
        stringstream tilePath;
        tilePath << "../Data/Media/Images/Tiles/" << dataElem->GetText() << ".png";
        _tile[x][y].SetTileTexture(_tileTextures.Add(tilePath.str()));
        // <tileTexture> - Finished applying the texture, move to the next sibling.

        // <solidTile> - Check to see if the tile is solid or not.
        dataElem = dataElem->NextSiblingElement("solidTile");
        assert(dataElem != NULL);
        string tileSolidity = dataElem->GetText();
        assert(tileSolidity == "false" || tileSolidity == "true");
        if(tileSolidity == "false")
          _tile[x][y].SetTileSolidity(false);
        else
          _tile[x][y].SetTileSolidity(true);
        // </solidTile>

        // <entityTexture>
        dataElem = dataElem->NextSiblingElement("entityTexture");
        assert(dataElem != NULL);
        string entityName = dataElem->GetText();
        if(entityName != "null") {
          stringstream entityPath;
          entityPath << "../Data/Media/Images/Entities/" << entityName << ".png";
          _tile[x][y].SetEntityTexture(_entityTextures.AddAlpha(entityPath.str()));

          _tile[x][y].SetEntityXY(_tile[x][y].GetTileX() + TILE_WIDTH  / 2 - _tile[x][y].GetEntityWidth()  / 2,
                                   _tile[x][y].GetTileY() + TILE_HEIGHT / 2 - _tile[x][y].GetEntityHeight() / 2);
        }
        // </entityTexture>

        // <SolidEntity>
        dataElem = dataElem->NextSiblingElement("solidEntity");
        assert(dataElem != NULL);
        string entitySolidity = dataElem->GetText();
        assert(entitySolidity == "false" || entitySolidity == "true");
        if(entitySolidity == "false")
          _tile[x][y].SetEntitySolidity(false);
        else
          _tile[x][y].SetEntitySolidity(true);
        // </solidEntity>

        // <zlevel>
        dataElem = dataElem->NextSiblingElement("zLevel");
        assert(dataElem != NULL);
        _tile[x][y].SetZLevel(atoi(dataElem->GetText()));
        // </zlevel>

        // <mapTransition>
        dataElem = dataElem->NextSiblingElement("mapTransition");
        assert(dataElem != NULL);
        _tile[x][y].SetMapTransitionName(dataElem->GetText());
        // </mapTransition>

        // <mapTransX>
        dataElem = dataElem->NextSiblingElement("mapTransX");
        assert(dataElem != NULL);
        int mapTransX = atoi(dataElem->GetText());
        // </mapTransX>

        // <mapTransY>
        dataElem = dataElem->NextSiblingElement("mapTransY");
        assert(dataElem != NULL);
        int mapTransY = atoi(dataElem->GetText());
        // </mapTransY>

        tileElem = tileElem->NextSiblingElement("tile");
      }
      //</tile>

      lineElem = lineElem->NextSiblingElement("line");
    }
    // </line>
  }
  // </map>
  levelWidth  = x * TILE_WIDTH;
  levelHeight = y * TILE_HEIGHT;

  //character->Load(filename);
}

void Map::Render(void) {
  int xOrig = (camera.x / TILE_WIDTH);
  int yOrig = (camera.y / TILE_HEIGHT);

  int xEnd = (SCREEN_WIDTH  / TILE_WIDTH);
  int yEnd = (SCREEN_HEIGHT / TILE_HEIGHT);

  if(xEnd < x)
    xEnd++;
  else
    xEnd = x;

  if(yEnd < y)
    yEnd++;
  else
    yEnd = y;

  for(int i = xOrig; i < xEnd; i++) {
    for(int j = yOrig; j < yEnd; j++) {
      _tile[i][j].Render();
    }
  }
}

void Map::Unload(void) {
  _tileTextures.Unload();
  _entityTextures.Unload();
}

string Map::GetCurrentMap(void) {
  return _currentMap;
}

bool Map::GetTileSolidity(int xArg, int yArg) {
  return _tile[xArg + 1][yArg + 1].GetTileSolidity();
}

int Map::GetTileX(int xArg, int yArg) {
  return _tile[xArg + 1][yArg + 1].GetTileX();
}

int Map::GetTileY(int xArg, int yArg) {
  return _tile[xArg + 1][yArg + 1].GetTileY();
}

bool Map::GetEntitySolidity(int xArg, int yArg) {
  if(xArg > x || yArg > y || yArg < 0 || yArg < 0) {
    return false;
  }

  return _tile[xArg + 1][yArg + 1].GetEntitySolitity();
}

int Map::GetEntityX(int xArg, int yArg) {
  return _tile[xArg + 1][yArg + 1].GetEntityX();
}

int Map::GetEntityY(int xArg, int yArg) {
  return _tile[xArg + 1][yArg + 1].GetEntityY();
}

int Map::GetEntityWidth(int xArg, int yArg) {
  return _tile[xArg + 1][yArg + 1].GetEntityWidth();
}

int Map::GetEntityHeight(int xArg, int yArg) {
  return _tile[xArg + 1][yArg + 1].GetEntityHeight();
}

int Map::GetTileZLevel(int xArg, int yArg) {
  return _tile[xArg + 1][yArg + 1].GetZLevel();
}

string Map::GetMapTransitionName(int xArg, int yArg) {
  return _tile[xArg + 1][yArg + 1].GetMapTransitionName();
}

int Map::GetMapTransitionX(int xArg, int yArg) {
  return _tile[xArg + 1][yArg + 1].GetMapTransitionX();
}

int Map::GetMapTransitionY(int xArg, int yArg) {
  return _tile[xArg + 1][yArg + 1].GetMapTransitionY();
}
