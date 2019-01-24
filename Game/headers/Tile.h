//
// Created by Julien on 22/01/2019.
//

#ifndef GAME_LEVEL_H
#define GAME_LEVEL_H

#include "../headers/Globals.h"
#include "../headers/Sprite.h"

class Graphics;

class Tile : public Sprite {
public:
    Tile();
    Tile(Vector2 spawnPoint, Vector2 size, Graphics &graphics, int timeToUpdate);
    virtual ~Tile();

    void update();
    void draw(Graphics &graphics);

    //Getter
    const Vector2 &getPos() const;

private:
    Vector2 pos;
    Vector2 size;
};


#endif //GAME_LEVEL_H
