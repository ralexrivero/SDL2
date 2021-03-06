#include "window.h"
/**
 * main - entry point
 * @argc: argument count
 * @args: pointer to argument vector
 * Return: 0 when done complete
 */
/* Screen dimension constants */
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
/* SDL requieres this type of main for compatibility */
int main(int argc, char *args[])
{
	/* The window we'll be rendering to */
	SDL_Window *window = NULL;
	/* The surface contained by the window */
	SDL_Surface *screenSurface = NULL;
	/* Initialize SDL */
	/* SDL return -1 on error */
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}
	else
	{
		/* Create window */
		/* windows title bar caption */
		/* position of the window */
		window = SDL_CreateWindow("SDL window", SDL_WINDOWPOS_UNDEFINED,
		/* shown flag to ensure the windows is show */
			SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		/* return NULL on error */
		if (window == NULL)
		{
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		}
		else
		{
			/* SDL initilize successfully */
			/* Get window surface */
			screenSurface = SDL_GetWindowSurface(window);
			/* Fill the surface white */
			SDL_FillRect(screenSurface, NULL,
				SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
			/* Update the surface */
			SDL_UpdateWindowSurface(window);

			/* Wait two seconds */
			/* while delaying don't accept input from keyboard or mouse */
			SDL_Delay(2000);
		}
	}
	/* Destroy window */
	SDL_DestroyWindow(window);
	/* Quit SDL subsystems */
	SDL_Quit();
	return (0);
}
