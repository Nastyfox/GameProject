//
// Created by Julien on 18/02/2019.
//

#ifndef GAME_INPUT_H
#define GAME_INPUT_H

#include <map>
#include "../include/SDL.h"

class Input {
public:
    Input();
    virtual ~Input();

    void beginNewFrame();

    //Key pressed and released
    void keyUpEvent(const SDL_Event& event);
    void keyDownEvent(const SDL_Event& event);

    //Check if a key was pressed, released or held
    bool wasKeyPressed(SDL_Scancode key);
    bool wasKeyReleased(SDL_Scancode key);
    bool isKeyHeld(SDL_Scancode key);

private:
    //Save different keys (pressed, released or held)
    std::map<SDL_Scancode, bool> heldKeys;
    std::map<SDL_Scancode, bool> pressedKeys;
    std::map<SDL_Scancode, bool> releasedKeys;
};


#endif //GAME_INPUT_H