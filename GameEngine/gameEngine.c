#include "mainEngine.h"

GameEngine_Data GameEngine_Start(data_t * dataUser, char title[], int largeur, int hauteur, int FPS)
{
  GameEngine_Data GE_data;

  GE_data.delayUpdate = 1000/FPS;
  GE_data.dataUser = dataUser;

  /* initialisation de la SDL2 */
  if(SDL_Init(SDL_INIT_VIDEO) == 1){
      return NULL;
  }

  /* initialisation de SDL_ttf */
  if (TTF_Init() != 0){
      SDL_Quit();
      return NULL;
  }

  /* initialisation de SDL_image */
  if((IMG_Init(flags)&flags) != flags){
      TTF_Quit();
      SDL_Quit();
      return NULL;
  }

  /* ouverture de la fenetre */
  window = SDL_CreateWindow(title,
                            SDL_WINDOWPOS_CENTERED,
                            SDL_WINDOWPOS_CENTERED,
                            largeur,hauteur,
                            0);

  if(!window){
    IMG_Quit();
    TTF_Quit();
    SDL_Quit();
    return NULL;
  }

  /* initialisation du renderer */
  GE_data.renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
  if(!GE_data.renderer){
    IMG_Quit();
    TTF_Quit();
    SDL_Quit();
    return NULL;
  }

  /*initialisation de la police*/
  GE_data.font = TTF_OpenFont("arial.ttf",20);

  return GE_data;
}

int GameEngine_Update(GameEngine_Data * GE_data)
{
  while (1==1)
  {
    eventUpdate(GE_data->dataUser);
    SDL_Delay(GE_data.delayUpdate);
  }

  return GameEngine_success;
}

int GameEngine_Stop(GameEngine_Data * GE_data)
{
  IMG_Quit();
  TTF_Quit();
  SDL_Quit();

  return GameEngine_success;
}
