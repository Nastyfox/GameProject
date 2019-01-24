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

Game::Game() :
    spawnTileTime(0)
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
    background = Sprite(graphics, "../content/sprites/background.png", 0, 0, globals::SCREEN_WIDTH, globals::SCREEN_HEIGHT, 0, 0);
    spawnTiles(graphics);

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
            if(SDL_GetTicks() - spawnTileTime >= globals::TILE_SPAWN_TIME)
            {
                spawnTiles(graphics);
            }
        }
    }
}

void Game::update() {
    //Update tiles position
    for(int i = 0; i < tiles.size(); i++)
    {
        destroyTiles();
        tiles[i].update();
    }
}

void Game::draw(Graphics &graphics) {
    //Clear renderer and draw new sprite
    graphics.clear();

    //Draw background
    background.draw(graphics, 0, 0);

    //Draw each tile
    for(int i = 0; i < tiles.size(); i++)
    {
        tiles[i].draw(graphics);
    }

    graphics.flip();
}

void Game::spawnTiles(Graphics &graphics) {
    //Random spawn position for the tile
    Vector2 spawnPoint;
    spawnPoint.x = globals::SCREEN_WIDTH;
    int posY = (int)(globals::SCREEN_HEIGHT - globals::TILE_SIZE * globals::TILE_HEIGHT);
    spawnPoint.y = rand() % posY;

    //Create the tile and store it in vector
    Tile tile = Tile(spawnPoint, Vector2(globals::TILE_IMG_WIDTH, globals::TILE_IMG_HEIGHT), graphics, 100);

    tiles.push_back(tile);

    //Last spawned tile timing
    spawnTileTime = SDL_GetTicks();
}

void Game::destroyTiles()
{
    //Destroy tiles when they are out of the screen
    for(int i = 0; i < tiles.size(); i++)
    {
        if(tiles[i].getPos().x + globals::TILE_WIDTH < 0)
        {
            tiles.erase(tiles.begin()+i);
        }
    }
}