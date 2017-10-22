#include<stdio.h>

typedef struct{
  int var;
}data_t;

#include "GameEngine/gameEngine.h"   // inclus le moteur de Andy , les guillemets sont ici pour faire la diff entre les bilbotek et les fichiers sa mere


int main()
{
	data_t mydataloul;
	mydataloul.var=42;
	GameEngine_data gameengine;
	gameeengine = GE_start(mydataloul, "Epopee d Asnigard",150,100,50);	//prises dans GE.h
	GE_Update(&gameengine);
  return 0;
}


int eventUpdate(data_t * data)
{

	printf("yolo\n");
  return 0;
}


