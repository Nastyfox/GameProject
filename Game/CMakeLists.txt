cmake_minimum_required(VERSION 3.13)

project(Game)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

set(SOURCE_FILES src/main.cpp src/Graphics.cpp headers/Graphics.h src/Game.cpp headers/Game.h src/Tile.cpp headers/Tile.h headers/Globals.h src/Sprite.cpp headers/Sprite.h src/Map.cpp headers/Map.h src/Input.cpp headers/Input.h src/AnimatedSprite.cpp headers/AnimatedSprite.h)

add_executable(Game ${SOURCE_FILES})
target_link_libraries(Game ${SDL2_LIBRARY} ${SDL2_IMAGE_LIBRARY} -lSDL2main)