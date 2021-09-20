#ifndef WINDOW_H
#define WINDOW_H
/* use SDL, standard IO, math, and boolean, string */
#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

/* Screen dimension constants */
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

/* life cycle functions */
/* Starts up SDL and creates window */
bool init(void);
/* Loads media */
bool loadMedia(void);
/* Frees media and shuts down SDL */
void _close(void);

/* variables */
/* The window we'll be rendering to */
SDL_Window *gWindow = NULL;
/* The surface contained by the window */
SDL_Surface *gScreenSurface = NULL;
/* The image we will load and show on the screen */
SDL_Surface *gXOut = NULL;
/* Loads individual image */
SDL_Surface *loadSurface(std::string path);



/* Current displayed image */
SDL_Surface *gCurrentSurface = NULL;

/* Key press surfaces constants */
enum KeyPressSurfaces
{
	KEY_PRESS_SURFACE_DEFAULT,
	KEY_PRESS_SURFACE_UP,
	KEY_PRESS_SURFACE_DOWN,
	KEY_PRESS_SURFACE_LEFT,
	KEY_PRESS_SURFACE_RIGHT,
	KEY_PRESS_SURFACE_TOTAL
};

#endif /* WINDOW_H */
