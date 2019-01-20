//
// Created by Julien on 20/01/2019.
//

#ifndef GAME_GRAPHICS_H
#define GAME_GRAPHICS_H

//Definition
#define WIDTH 1280
#define HEIGHT 720

struct SDL_Window;
struct SDL_Renderer;

class Graphics {
private:
    //Window and Renderer variables
    SDL_Window* window;
    SDL_Renderer* renderer;

    //Initialisazion state
    bool init;

public:
    Graphics();
    virtual ~Graphics();

    //Getter
    bool isInit() const;
};


#endif //GAME_GRAPHICS_H
