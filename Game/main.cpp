#include <iostream>

#include "include/SDL.h"

using namespace std;

int main(int argc, char *argv[]) {
    if(SDL_Init(SDL_INIT_EVERYTHING) == -1)
    {
        cout << "Wrong" << SDL_GetError() << endl;
    }

    SDL_Window* window = SDL_CreateWindow("SDL_Demo", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_OPENGL);

    if(window == nullptr)
    {
        cout << "Wrong again" << endl;
    }

    SDL_Delay(2000);
    SDL_Quit();

    return 0;
}