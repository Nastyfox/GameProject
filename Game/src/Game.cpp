//
// Created by Julien on 20/01/2019.
//

#include <algorithm>
#include <iostream>
#include <ctime>
#include "../headers/Game.h"
#include "../headers/Graphics.h"
#include "../include/SDL.h"
#include "../headers/Globals.h"

int cpt = 0;

Game::Game()
{
    srand(time(nullptr));
    this->gameLoop();
}

Game::~Game() {
}

void Game::gameLoop() {
    Graphics graphics;
    //Handle events
    SDL_Event event;

    //Load background sprite
    background = Sprite(graphics, globals::BACKGROUND, 0, 0, globals::SCREEN_WIDTH, globals::SCREEN_HEIGHT, 0, 0);
    //Spawn the first platform
    map.spawnTiles(graphics);
    //Add the ground
    map.ground(graphics);

    //Timer
    int elapsedTimeMs = 0;
    int timeMs = 0;

    //Check if initialisazion is OK
    if(graphics.isInit())
    {
        isRunning = true;
        //Run the game while it's closed
        while(isRunning)
        {
            timeMs = SDL_GetTicks();
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
            elapsedTimeMs = SDL_GetTicks() - timeMs;

            update();

            draw(graphics);

            //Limit the FPS
            if(elapsedTimeMs < globals::MAX_FRAME_TIME)
            {
                SDL_Delay(globals::MAX_FRAME_TIME - elapsedTimeMs);
            }

            //Spawn tile every X seconds
            if(SDL_GetTicks() - map.getSpawnTime() >= globals::TILE_SPAWN_TIME)
            {
                map.spawnTiles(graphics);
            }
        }
    }
}

void Game::update() {
    //Update tiles position
    map.update();
}

void Game::draw(Graphics &graphics) {
    //Clear renderer and draw new sprite
    graphics.clear();

    //Draw background
    background.draw(graphics, 0, 0);

    //Draw ground and platforms
    map.draw(graphics);

    graphics.flip();
}