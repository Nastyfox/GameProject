cmake_minimum_required(VERSION 3.13)

project(Game)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

set(SDL2_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(SDL2_LIBRARY ${PROJECT_SOURCE_DIR}/lib)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

set(SOURCE_FILES main.cpp)

add_executable(Game ${SOURCE_FILES})
target_link_libraries(Game ${SDL2_LIBRARY} -lmingw32 -lSDL2main -lSDL2)