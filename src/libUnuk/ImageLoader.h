#ifndef _IMAGELOADER_H_
#define _IMAGELOADER_H_
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "../Unuk/Globals.h"
#include "Debug.h"

SDL_Surface* LoadImage(const char* filename);
SDL_Surface* LoadImageAlpha(const char* filename);

#endif
