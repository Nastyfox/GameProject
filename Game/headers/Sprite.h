//
// Created by Julien on 22/01/2019.
//

#ifndef GAME_SPRITE_H
#define GAME_SPRITE_H

#include "../include/SDL.h"


struct Graphics;

class Sprite {
public:
    Sprite();
    Sprite(Graphics &graphics, int type, int sourceX, int sourceY, int width, int height, float posX, float posY);
    virtual ~Sprite();

    virtual void update();

    virtual void draw(Graphics &graphics, int x, int y);

protected:
    SDL_Rect sourceRect;
    SDL_Texture* sprite;

    float x, y;

};


#endif //GAME_SPRITE_H
