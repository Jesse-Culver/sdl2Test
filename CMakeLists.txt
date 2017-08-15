cmake_minimum_required(VERSION 3.8)
project(sdlTest)

set(SDL2_PATH "C:\\DEV\\SDL2_MinGW_32Bit")

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake")

find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIR})


set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp)

add_executable(sdlTest ${SOURCE_FILES})

target_link_libraries(sdlTest ${SDL2_LIBRARY})