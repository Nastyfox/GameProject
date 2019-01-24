//
// Created by Julien on 22/01/2019.
//

#include <iostream>
#include <time.h>
#include "../headers/Tile.h"
#include "../headers/Graphics.h"

Tile::Tile() {}

Tile::Tile(Vector2 spawnPoint, Vector2 size, Graphics &graphics, int timeToUpdate) :
    Sprite(graphics, "../content/sprites/tile.png", 0, 0, size.x, size.y, spawnPoint.x, spawnPoint.y),
    pos(spawnPoint), size(size)
{

}

Tile::~Tile() {

}

void Tile::update() {
    //Moving the tile on the X-axis
    pos.x -= 3;
}

void Tile::draw(Graphics &graphics) {
    //Draw sprite on renderer changing the size of the Tile (reduce it)
    SDL_Rect destRect = {pos.x, pos.y, (int)(sourceRect.w * globals::TILE_SIZE), (int)(sourceRect.h * globals::TILE_SIZE)};

    graphics.blitSurface(sprite, &sourceRect, &destRect);
}

const Vector2 &Tile::getPos() const {
    return pos;
}
