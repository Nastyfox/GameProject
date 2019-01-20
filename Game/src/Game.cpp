//
// Created by Julien on 20/01/2019.
//

#include "../headers/Game.h"
#include "../headers/Graphics.h"
#include "../include/SDL.h"

Game::Game() {
    this->gameLoop();
}

Game::~Game() {

}

void Game::gameLoop() {
    Graphics graphics;
    //Handle events
    SDL_Event event;

    //Check if initialisazion is OK
    if(graphics.isInit())
    {
        isRunning = true;
        //Run the game while it's closed
        while(isRunning)
        {
            //Check if there is an available event to handle
            if(SDL_PollEvent(&event))
            {
                //Close event
                if(event.type == SDL_QUIT)
                {
                    isRunning = false;
                }
            }
        }
    }
}
