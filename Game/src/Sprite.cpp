//
// Created by Julien on 22/01/2019.
//

#include <iostream>
#include <string>
#include "../headers/Sprite.h"
#include "../headers/Graphics.h"
#include "../headers/Globals.h"

Sprite::Sprite() {

}

Sprite::Sprite(Graphics &graphics, int type, int sourceX, int sourceY, int width, int height, float posX, float posY) :
    x(posX), y(posY)
{
    sourceRect.x = sourceX;
    sourceRect.y = sourceY;
    sourceRect.w = width;
    sourceRect.h = height;

    //Change filePath depending on sprite type
    std::string filePath;

    switch(type)
    {
        case globals::BACKGROUND :
            filePath = "../content/sprites/background.png";
            break;
        case globals::GROUND_TILE :
            filePath = "../content/sprites/ground.png";
            break;
        case globals::PLATFORM_TILE :
            filePath = "../content/sprites/platform.png";
            break;
        case globals::SPIKE_TILE :
            filePath = "../content/sprites/spikes.png";
            break;
    }

    //Get sprite from image
    sprite = SDL_CreateTextureFromSurface(graphics.getRenderer(), graphics.loadImage(filePath));

    if(sprite == nullptr)
    {
        std::cout << "Problem with image loading" << std::endl;
    }
}

Sprite::~Sprite() {

}

void Sprite::update() {

}

void Sprite::draw(Graphics &graphics, int x, int y) {
    //Draw sprite on renderer
    SDL_Rect destRect = {x, y, sourceRect.w, sourceRect.h};

    graphics.blitSurface(sprite, &sourceRect, &destRect);
}