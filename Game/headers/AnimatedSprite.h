//
// Created by Julien on 18/02/2019.
//

#ifndef GAME_ANIMATEDSPRITE_H
#define GAME_ANIMATEDSPRITE_H

#include "../headers/Sprite.h"
#include "../headers/Globals.h"
#include <string>
#include <map>
#include <vector>

class AnimatedSprite : public Sprite {
public:
    AnimatedSprite();
    AnimatedSprite(Graphics &graphics, int type, int sourceX, int sourceY, int width, int height, float posX, float posY, float timeToUpdate);

    //Play the selected animation and choose if it has to be played infinitely or not
    void playAnimation(std::string animation, bool once = false);

    void update(int elaspedTime);
    void draw(Graphics &graphics, int x, int y);

    //Add all animations
    virtual void setupAnimations();

protected:
    //Animation attributes
    bool currentAnimationOnce;
    std::string currentAnimation;
    double timeToUpdate;

    //Handle animations
    void addAnimation(int frames, int x, int y, std::string name, int width, int height, Vector2 offset);
    void resetAnimations();
    void stopAnimation();
    void changeVisibility(bool visible);
    virtual void animationDone(std::string currentAnimation);

private:
    //Store animations
    std::map<std::string, std::vector<SDL_Rect>> animations;
    std::map<std::string, Vector2> offsets;

    //Animation handling
    int frameIndex;
    bool visible;
    double timeElapsed;
};


#endif //GAME_ANIMATEDSPRITE_H
