//
// Created by Julien on 20/01/2019.
//

#ifndef GAME_GAME_H
#define GAME_GAME_H

#include <vector>
#include "../headers/Sprite.h"
#include "../headers/Tile.h"

class Graphics;

class Game {
public:
    Game();
    virtual ~Game();

    void update();
    void draw(Graphics &graphics);

private:
    //Game loop management
    void gameLoop();
    void spawnTiles(Graphics &graphics);
    void destroyTiles();

    //Game status
    bool isRunning;

    Sprite background;

    //Tile storage
    std::vector<Tile> tiles;
    int spawnTileTime;
};


#endif //GAME_GAME_H
