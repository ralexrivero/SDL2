#ifndef WINDOW_H
#define WINDOW_H

#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdbool.h>

/* live cycle in modular */
bool init(void);
bool loadMedia(void);
void xclose(void);

#endif /* WINDOW_H */
