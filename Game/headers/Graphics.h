//
// Created by Julien on 20/01/2019.
//

#ifndef GAME_GRAPHICS_H
#define GAME_GRAPHICS_H

#include <map>
#include <string>

struct SDL_Window;
struct SDL_Renderer;
struct SDL_Surface;
struct SDL_Texture;
struct SDL_Rect;

class Graphics {
public:
    Graphics();
    virtual ~Graphics();

    //Save sprites each time we load a new one
    SDL_Surface* loadImage(const std::string &filePath);

    //Draw texture on the screen
    void blitSurface(SDL_Texture* texture, SDL_Rect* sourceRect, SDL_Rect* destRect);

    //Render everything on the screen
    void flip();

    //Clear the screen
    void clear();

    //Getter
    bool isInit() const;
    SDL_Renderer *getRenderer() const;

private:
    //Window and Renderer variables
    SDL_Window* window;
    SDL_Renderer* renderer;

    //Initialisazion state
    bool init;

    //Store for sprites
    std::map<std::string, SDL_Surface*> sprites;
};


#endif //GAME_GRAPHICS_H
