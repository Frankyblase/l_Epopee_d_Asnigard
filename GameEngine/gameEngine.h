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

  GameEngine_Data GameEngine_Start(data_t * dataUser, char title[], int largeur, int hauteur, int FPS);

  int GameEngine_Update(GameEngine_Data * GE_data);
  int GameEngine_Stop(GameEngine_Data * GE_data);
#endif
