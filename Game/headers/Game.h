//
// Created by Julien on 20/01/2019.
//

#ifndef GAME_GAME_H
#define GAME_GAME_H

class Graphics;

class Game {
public:
    Game();
    virtual ~Game();

private:
    //Game loop management
    void gameLoop();

    //Game status
    bool isRunning;
};


#endif //GAME_GAME_H
