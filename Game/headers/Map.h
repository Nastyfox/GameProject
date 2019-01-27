//
// Created by Julien on 26/01/2019.
//

#ifndef GAME_MAP_H
#define GAME_MAP_H

#include <vector>
#include "../headers/Globals.h"
#include "../headers/Tile.h"

class Graphics;

class Map {
public:
    Map();
    virtual ~Map();

    void draw(Graphics &graphics);
    void update();

    //Tiles spawn and destroy
    void spawnTiles(Graphics &graphics);
    void destroyTiles(Graphics &graphics);

    //Ground
    void ground(Graphics &graphics);

    //Getter
    int getSpawnTime() const;
    const std::vector<Tile> &getTiles() const;
    const std::vector<Tile> &getGroundTiles() const;

private:
    //Tile storage
    std::vector<Tile> tiles;
    std::vector<Tile> groundTiles;
    int spawnTime;
};


#endif //GAME_MAP_H
