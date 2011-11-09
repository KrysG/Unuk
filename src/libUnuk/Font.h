#ifndef _FONT_H_
#define _FONT_H_
#include <SDL/SDL_ttf.h>
#include <fstream>
#include <assert.h>
#include "Debug.h"
using namespace std;

TTF_Font* Font(const char* filename, const int size);

#endif
