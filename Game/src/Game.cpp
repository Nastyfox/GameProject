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
#include "../headers/input.h"

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
    //Handle inputs
    Input input;
    //Handle events
    SDL_Event event;

    //Load background sprite
    background = Sprite(graphics, globals::BACKGROUND, 0, 0, globals::SCREEN_WIDTH, globals::SCREEN_HEIGHT, 0, 0);
    //Load player animated sprite
    player = AnimatedSprite(graphics, globals::PLAYER, 0, 0, globals::PLAYER_WIDTH, globals::PLAYER_HEIGHT, 100, globals::GROUND_POS, 100);
    player.setupAnimations();
    player.playAnimation("RunLeft");
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
            input.beginNewFrame();

            timeMs = SDL_GetTicks();
            //Check if there is an available event to handle
            if(SDL_PollEvent(&event))
            {
                //Close event
                if(event.type == SDL_QUIT)
                {
                    isRunning = false;
                }

                //Key pressed event
                else if(event.type == SDL_KEYDOWN)
                {
                    if(event.key.repeat == 0)
                    {
                        input.keyDownEvent(event);
                    }
                }

                //Key released event
                else if(event.type == SDL_KEYUP)
                {
                    input.keyUpEvent(event);
                }
            }

            //Qui if escape is pressed
            if(input.wasKeyPressed(SDL_SCANCODE_ESCAPE) == true)
            {
                isRunning = false;
            }

            //Get elapsed time to refresh the screen
            elapsedTimeMs = SDL_GetTicks() - timeMs;

            update(globals::MAX_FRAME_TIME - elapsedTimeMs);

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

void Game::update(int elaspedTime) {
    //Update tiles position
    map.update();
    //Update player animation
    player.update(elaspedTime);
}

void Game::draw(Graphics &graphics) {
    //Clear renderer and draw new sprite
    graphics.clear();

    //Draw background
    background.draw(graphics, 0, 0);

    //Draw player
    player.draw(graphics, 100, globals::GROUND_POS - globals::PLAYER_HEIGHT*globals::PLAYER_SIZE);

    //Draw ground and platforms
    map.draw(graphics);

    graphics.flip();
}