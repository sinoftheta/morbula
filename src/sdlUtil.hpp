#ifndef SDL_UTIL_HPP
#define SDL_UTIL_HPP

//Using SDL, SDL_image, standard IO, math, and strings
#include <SDL.h>
#include <SDL_image.h>
//#include <SDL_ttf.h>

//idk bout these ones, might go in main idk idk
#include <stdio.h> 
#include <string>
#include <cmath> //gross lol


//make this into an SLDManager class

//Screen dimension constants
inline const int SCREEN_WIDTH = 640;
inline const int SCREEN_HEIGHT = 480;
inline const float SCREEN_ASPECT = ((float) SCREEN_WIDTH) / ((float) SCREEN_HEIGHT);
inline const int SCREEN_FPS = 60;
inline const int SCREEN_TICK_PER_FRAME = 1000 / SCREEN_FPS;

//The window we'll be rendering to
inline SDL_Window* gWindow = NULL;

//The window renderer
inline SDL_Renderer* gRenderer = NULL;

//Starts up SDL and creates window
bool init();

//Frees media and shuts down SDL
void close();

//Loads individual image as texture
SDL_Texture* loadTexture( std::string path );

inline uint16_t globalRng(uint32_t seed = 0){
	static uint32_t reg; //just seed with garbage uninitialized data by default lol
	if(seed) reg = seed;

	reg = reg * 22695477 + 1;
	return reg >> 16; //upper 16 bits
}


#endif