//
// Created by Julien on 18/02/2019.
//

#include "../headers/Input.h"

Input::Input() {}

Input::~Input() {

}

void Input::beginNewFrame() {
    //Clear maps of keys for new frame
    pressedKeys.clear();
    releasedKeys.clear();
}

void Input::keyUpEvent(const SDL_Event &event) {
    //Release key event
    releasedKeys[event.key.keysym.scancode] = true;
    heldKeys[event.key.keysym.scancode] = false;
}

void Input::keyDownEvent(const SDL_Event &event) {
    //Press key event
    pressedKeys[event.key.keysym.scancode] = true;
    heldKeys[event.key.keysym.scancode] = true;
}

bool Input::wasKeyPressed(SDL_Scancode key) {
    return pressedKeys[key];
}

bool Input::wasKeyReleased(SDL_Scancode key) {
    return releasedKeys[key];
}

bool Input::isKeyHeld(SDL_Scancode key) {
    return heldKeys[key];
}
