//
// Created by Julien on 20/01/2019.
//

#ifndef GAME_GAME_H
#define GAME_GAME_H

#include "../headers/Sprite.h"
#include "../headers/Map.h"

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

    //Game status
    bool isRunning;

    Sprite background;
    Map map;
};


#endif //GAME_GAME_H
