#ifndef WINDOW_H
#define WINDOW_H

#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdbool.h>

/* live cycle in modular */
void init(void);
void loadMedia(void);
void _close(void);

#endif /* WINDOW_H */
