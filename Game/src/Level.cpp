//
// Created by Julien on 22/01/2019.
//

#include "../headers/Level.h"

Level::Level() {}

Level::~Level() {

}

Level::Level(std::string mapName, Vector2 spawnPoint, Graphics &graphics) :
        mapName(mapName), spawnPoint(spawnPoint), size(Vector2::zero())
{
    loadMap(mapName, graphics);
}

void Level::loadMap(std::string mapName, Graphics &graphics) {

}

void Level::update(int elapsedTime) {

}

void Level::draw(Graphics &graphics) {

}
