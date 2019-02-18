//
// Created by Julien on 18/02/2019.
//

#include "../headers/AnimatedSprite.h"
#include <utility>
#include <iostream>
#include "../headers/Graphics.h"

AnimatedSprite::AnimatedSprite() {}

AnimatedSprite::AnimatedSprite(Graphics &graphics, int type, int sourceX, int sourceY, int width, int height, float posX, float posY, float timeToUpdate) :
    Sprite(graphics, type, sourceX, sourceY, width, height, posX, posY),
    frameIndex(0), visible(true), currentAnimationOnce(false), currentAnimation("")
{
    this->timeToUpdate = timeToUpdate;
}

void AnimatedSprite::playAnimation(std::string animation, bool once) {
    //Check if animation has to be played more than once
    currentAnimationOnce = once;

    //Launch the animation if it's a new one
    if(currentAnimation != animation)
    {
        currentAnimation = animation;
        frameIndex = 0;
    }
}

void AnimatedSprite::update(int elapsedTime) {
    Sprite::update();

    //Check if there is enough time elapsed between two frames of animation
    timeElapsed += elapsedTime;

    if(timeElapsed >= timeToUpdate)
    {
        timeElapsed = 0;

        //Go to the next animation frame
        if(frameIndex < animations[currentAnimation].size() - 1)
        {
            frameIndex++;
        }
        else{
            //If the animation is played only once, stop the animation
            if(currentAnimationOnce == true)
            {
                changeVisibility(false);
            }

            //Reset the animation frame
            frameIndex = 0;

            animationDone(currentAnimation);
        }
    }
}

void AnimatedSprite::draw(Graphics &graphics, int x, int y) {
    //Draw only if the animation has to be shown
    if(visible)
    {
        SDL_Rect dest_Rect;

        dest_Rect.x = x + offsets[currentAnimation].x;
        dest_Rect.y = y + offsets[currentAnimation].y;
        dest_Rect.w = sourceRect.w * globals::PLAYER_SIZE;
        dest_Rect.h = sourceRect.h * globals::PLAYER_SIZE;

        //Get the sprite of the frame animation
        SDL_Rect sourceRect = animations[currentAnimation][frameIndex];

        graphics.blitSurface(sprite, &sourceRect, &dest_Rect);
    }
}

void AnimatedSprite::setupAnimations() {
    //Add all animations
    addAnimation(9, 0, 9, "RunLeft", globals::PLAYER_WIDTH, globals::PLAYER_HEIGHT, Vector2(0,0));
}

void AnimatedSprite::addAnimation(int frames, int x, int y, std::string name, int width, int height, Vector2 offset) {
    std::vector<SDL_Rect> rectangles;

    //Get all frame animations for the current animation
    for(int i = 0; i < frames; i++)
    {
        SDL_Rect newRect = {(i+x)*width, y*height, width, height};
        rectangles.push_back(newRect);
    }

    //Add it to the maps to store them
    animations.insert(std::pair<std::string, std::vector<SDL_Rect>> (name,rectangles));
    offsets.insert(std::pair<std::string, Vector2> (name, offset));
}

void AnimatedSprite::resetAnimations() {
    //Clear maps
    animations.clear();
    offsets.clear();
}

void AnimatedSprite::stopAnimation() {
    //Stop the animation
    frameIndex = 0;
    animationDone(currentAnimation);
}

void AnimatedSprite::changeVisibility(bool visible) {
    //Change visibility to the new value
    this->visible = visible;
}

void AnimatedSprite::animationDone(std::string currentAnimation) {

}
