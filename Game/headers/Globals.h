//
// Created by Julien on 22/01/2019.
//

#ifndef GAME_GLOBALS_H
#define GAME_GLOBALS_H

//Global variables
namespace globals
{
    const int SCREEN_WIDTH = 1280;
    const int SCREEN_HEIGHT = 720;

    const int FPS = 50;
    const int MAX_FRAME_TIME = 1000/FPS;
}

//Struct with 2 int (position, size)
struct Vector2
{
    int x, y;

    //Constructors
    Vector2() :
        x(0), y(0)
    {}

    Vector2(int x, int y) :
        x(x), y(y)
    {}

    //Zero
    static Vector2 zero()
    {
        return Vector2(0, 0);
    }
};

#endif //GAME_GLOBALS_H
