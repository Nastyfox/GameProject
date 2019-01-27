//
// Created by Julien on 22/01/2019.
//

#ifndef TILE_H
#define TILE_H

#include "../headers/Globals.h"
#include "../headers/Sprite.h"

class Graphics;

class Tile : public Sprite {
public:
    Tile();
    Tile(int type, Vector2 spawnPoint, Vector2 size, Graphics &graphics);
    virtual ~Tile();

    void update();
    void draw(Graphics &graphics);

    const Vector2 &getPos() const;

    int getType() const;

private:
    Vector2 pos;
    Vector2 size;
    int type;
};


#endif //TILE_H
