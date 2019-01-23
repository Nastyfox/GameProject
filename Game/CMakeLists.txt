cmake_minimum_required(VERSION 3.13)

project(Game)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

find_package(SDL2 REQUIRED)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(SDL2_IMAGE REQUIRED_VARS SDL2_IMAGE_LIBRARY SDL2_IMAGE_INCLUDE_DIR)

include_directories(${SDL2_INCLUDE_DIR})

set(SOURCE_FILES src/main.cpp src/Graphics.cpp headers/Graphics.h src/Game.cpp headers/Game.h src/Level.cpp headers/Level.h headers/Globals.h src/Sprite.cpp headers/Sprite.h)

add_executable(Game ${SOURCE_FILES})
target_link_libraries(Game ${SDL2_LIBRARY} ${SDL2_IMAGE_LIBRARY} -lSDL2main)