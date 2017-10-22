#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>

#ifndef ___gameEngine___
  #define ___gameEngine___

  #define GE_ GameEngine_


  #define GameEngine_error 101;
  #define GameEngine_success 100;

  typedef struct{
    SDL_Renderer * renderer;
    data_t * dataUser;
    int delayUpdate;
    TTF_Font * font;
  }GameEngine_Data;
#endif
