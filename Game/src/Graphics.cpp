//
// Created by Julien on 20/01/2019.
//

#include <iostream>
#include "../headers/Graphics.h"
#include "../include/SDL.h"
#include "../include/SDL_image.h"
#include "../headers/Globals.h"

Graphics::Graphics() {
    //Init SDL library
    if(SDL_Init(SDL_INIT_EVERYTHING) == -1) {
        std::cout << "Problem with SDL Initialization" << std::endl;
        init = false;
    }
    else
    {
        //Create the windoow and renderer
        if(SDL_CreateWindowAndRenderer(globals::SCREEN_WIDTH, globals::SCREEN_HEIGHT, SDL_WINDOW_RESIZABLE , &this->window, &this->renderer))
        {
            std::cout << "Problem with Window and Renderer creation" << std::endl;
            init = false;
        }
        else
        {
            //Change window name and finish initialization
            SDL_SetWindowTitle(this->window, "Game Window");
            init = true;
        }
    }
}

Graphics::~Graphics() {
    //Destroy window and renderer created
    SDL_DestroyWindow(this->window);
    SDL_DestroyRenderer(this->renderer);
}

SDL_Surface *Graphics::loadImage(const std::string &filePath) {
    //Load image from a file and store it if it doesn't exist
    if(this->sprites.count(filePath) == 0)
    {
        sprites[filePath] = IMG_Load(filePath.c_str());
    }

    return sprites[filePath];
}

void Graphics::blitSurface(SDL_Texture *texture, SDL_Rect *sourceRect, SDL_Rect *destRect) {
    SDL_RenderCopy(renderer, texture, sourceRect, destRect);
}

void Graphics::flip() {
    SDL_RenderPresent(renderer);
}

void Graphics::clear() {
    SDL_RenderClear(renderer);
}

//Getters
bool Graphics::isInit() const {
    return init;
}

SDL_Renderer *Graphics::getRenderer() const {
    return renderer;
}
