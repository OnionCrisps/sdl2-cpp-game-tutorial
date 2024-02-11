#include<iostream>
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>

#include"RenderWindow.hpp"

using namespace std;

int main(int argc, char* args[]){
	if(SDL_Init(SDL_INIT_VIDEO)>0){
		cout<<"Return SQL failure: "<< SDL_GetError() << endl;

	}

	if(!(IMG_Init(IMG_INIT_PNG))){
		cout<<"Return IMT_init failure: "<< SDL_GetError()<<endl;
	}

	RenderWindow window("Game 1", 1280, 720);

	bool gameRunning = true;
	
	SDL_Event event;

	while (gameRunning){
		while(SDL_PollEvent(&event)){
			if(event.type == SDL_QUIT){
				gameRunning = false;
			}
		}
	}

	window.cleanUp();
	SDL_Quit();

	return 0;
	}
