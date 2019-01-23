//
// Created by Julien on 22/01/2019.
//

#ifndef GAME_LEVEL_H
#define GAME_LEVEL_H

#include <string>
#include "../headers/Globals.h"
#include "../include/SDL.h"

class Graphics;

class Level {
public:
    Level();
    Level(std::string mapName, Vector2 spawnPoint, Graphics &graphics);
    virtual ~Level();

    void update(int elapsedTime);
    void draw(Graphics &graphics);

private:
    std::string mapName;
    Vector2 spawnPoint;
    Vector2 size;
    SDL_Texture* backgroundTexture;

    void loadMap(std::string mapName, Graphics &graphics);

};


#endif //GAME_LEVEL_H
