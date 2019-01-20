//
// Created by Julien on 20/01/2019.
//

#include "../headers/Graphics.h"
#include "../include/SDL.h"
#include <iostream>

Graphics::Graphics() {
    //Init SDL library
    if(SDL_Init(SDL_INIT_EVERYTHING) == -1) {
        SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Problem with SDL Initialization : %s", SDL_GetError());
        init = false;
    }
    else
    {
        //Create the windoow and renderer
        if(SDL_CreateWindowAndRenderer(WIDTH, HEIGHT, SDL_WINDOW_RESIZABLE , &this->window, &this->renderer))
        {
            SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Problem with Window and Renderer creation : %s", SDL_GetError());
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

//Getter
bool Graphics::isInit() const {
    return init;
}
