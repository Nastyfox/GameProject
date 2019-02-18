//
// Created by Julien on 26/01/2019.
//

#include "../headers/Map.h"
#include <iostream>

Map::Map() :
    spawnTime(0)
{

}

Map::~Map() {

}

void Map::spawnTiles(Graphics &graphics) {
    //Random spawn position for the tile
    Vector2 spawnPoint;
    spawnPoint.x = globals::SCREEN_WIDTH;
    int posY = (int)(globals::SCREEN_HEIGHT - globals::GROUND_HEIGHT - globals::TILE_HEIGHT);
    spawnPoint.y = rand() % posY;

    //Create the tile and store it in vector
    Tile tile = Tile(globals::PLATFORM_TILE, spawnPoint, Vector2(globals::TILE_IMG_WIDTH, globals::TILE_IMG_HEIGHT), graphics);

    tiles.push_back(tile);

    //Last spawned tile timing
    spawnTime = SDL_GetTicks();
}

void Map::destroyTiles(Graphics &graphics) {
    //Destroy tiles when out of the screen
    for(int i = 0; i < tiles.size(); i++)
    {
        if(tiles[i].getPos().x + globals::TILE_WIDTH <= 0)
        {
            tiles.erase(tiles.begin()+i);
        }
    }

    //Destroy ground when out of the screen
    for(int i = 0; i < groundTiles.size(); i++)
    {
        if(groundTiles[i].getPos().x + globals::TILE_WIDTH <= 0)
        {
            //Get lastRow of ground tiles for X position
            int lastRow = groundTiles.size() - 2;

            //Add a new ground tile at the end of the screen
            if(groundTiles[i].getType() == globals::GROUND_TILE)
            {
                Vector2 pos = Vector2(groundTiles[lastRow].getPos().x + globals::TILE_WIDTH, globals::SCREEN_HEIGHT - globals::TILE_HEIGHT);
                Tile groundTile;

                groundTile = Tile(globals::GROUND_TILE, pos, Vector2(globals::TILE_IMG_WIDTH, globals::TILE_IMG_HEIGHT), graphics);

                groundTiles.push_back(groundTile);
            }
            //Add a new platform tile at the end of the screen
            else if(groundTiles[i].getType() == globals::PLATFORM_TILE || groundTiles[i].getType() == globals::SPIKE_TILE)
            {
                Vector2 pos = Vector2(groundTiles[lastRow].getPos().x + globals::TILE_WIDTH, globals::SCREEN_HEIGHT - globals::GROUND_HEIGHT);
                Tile groundTile;

                //Random spawn of spikes
                int spike = rand() % globals::SPIKE_PROBA + 1;

                if(spike == globals::SPIKE_PROBA)
                {
                    groundTile = Tile(globals::SPIKE_TILE, pos, Vector2(globals::TILE_IMG_WIDTH, globals::TILE_IMG_HEIGHT), graphics);

                    groundTiles.push_back(groundTile);
                }
                else
                {
                    groundTile = Tile(globals::PLATFORM_TILE, pos, Vector2(globals::TILE_IMG_WIDTH, globals::TILE_IMG_HEIGHT), graphics);

                    groundTiles.push_back(groundTile);
                }
            }

            groundTiles.erase(groundTiles.begin()+i);
        }
    }
}

void Map::ground(Graphics &graphics) {
    Vector2 pos;
    Tile groundTile;

    //Create 2 lines of ground at the bottom of the screen
    for(int i = 0; i < globals::SCREEN_WIDTH + globals::TILE_WIDTH; i = i + globals::TILE_WIDTH)
    {
        pos.x = i;
        pos.y = globals::SCREEN_HEIGHT - globals::TILE_HEIGHT;

        groundTile = Tile(globals::GROUND_TILE, pos, Vector2(globals::TILE_IMG_WIDTH, globals::TILE_IMG_HEIGHT), graphics);

        groundTiles.push_back(groundTile);

        pos.y -= globals::TILE_HEIGHT;

        groundTile = Tile(globals::PLATFORM_TILE, pos, Vector2(globals::TILE_IMG_WIDTH, globals::TILE_IMG_HEIGHT), graphics);

        groundTiles.push_back(groundTile);
    }
}

int Map::getSpawnTime() const {
    return spawnTime;
}

const std::vector<Tile> &Map::getTiles() const {
    return tiles;
}

const std::vector<Tile> &Map::getGroundTiles() const {
    return groundTiles;
}

void Map::draw(Graphics &graphics) {
    destroyTiles(graphics);

    //Draw each tile
    for(int i = 0; i < tiles.size(); i++)
    {
        tiles[i].draw(graphics);
    }

    for(int i = 0; i < groundTiles.size(); i++)
    {
        groundTiles[i].draw(graphics);
    }
}

void Map::update() {
    //Update each tile position
    for(int i = 0; i < tiles.size(); i++)
    {
        tiles[i].update();
    }

    for(int i = 0; i < groundTiles.size(); i++)
    {
        groundTiles[i].update();
    }
}
