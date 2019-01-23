//
// Created by Julien on 20/01/2019.
//

#include <algorithm>
#include "../headers/Game.h"
#include "../headers/Graphics.h"
#include "../include/SDL.h"
#include "../headers/Globals.h"

Game::Game() {
    this->gameLoop();
}

Game::~Game() {

}

void Game::gameLoop() {
    Graphics graphics;
    //Handle events
    SDL_Event event;

    //Load background sprite
    background = Sprite(graphics, "../content/sprites/background.png", 0, 0, globals::SCREEN_WIDTH, globals::SCREEN_HEIGHT, 0, 0);

    //Timer
    int elapsedTimeMs = 0;
    int startTimeMs = 0;

    //Check if initialisazion is OK
    if(graphics.isInit())
    {
        startTimeMs = SDL_GetTicks();
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

            //Get elapsed time to refresh the screen
            elapsedTimeMs = SDL_GetTicks() - startTimeMs;
            update(std::min(elapsedTimeMs, globals::MAX_FRAME_TIME));

            draw(graphics);
        }
    }
}

void Game::update(int elapsedTime) {

}

void Game::draw(Graphics &graphics) {
    //Clear renderer and draw new sprite
    graphics.clear();

    background.draw(graphics, 0, 0);

    graphics.flip();
}


