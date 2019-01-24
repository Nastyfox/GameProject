//
// Created by Julien on 22/01/2019.
//

#ifndef GAME_GLOBALS_H
#define GAME_GLOBALS_H

//Global variables
namespace globals
{
    //Screen size
    const int SCREEN_WIDTH = 1280;
    const int SCREEN_HEIGHT = 720;

    //Tile size
    const int TILE_IMG_WIDTH = 255;
    const int TILE_IMG_HEIGHT = 147;
    const float TILE_SIZE = 0.5f;
    const int TILE_WIDTH = TILE_IMG_WIDTH*TILE_SIZE;
    const int TILE_HEIGHT = TILE_IMG_HEIGHT*TILE_SIZE;
    const int TILE_SPAWN_TIME = 2000;

    //Screen refresh
    const int FPS = 60;
    const int MAX_FRAME_TIME = 1000/FPS;
}

//Struct with 2 int for position and size
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
