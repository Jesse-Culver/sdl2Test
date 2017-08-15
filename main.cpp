#include <iostream>
#include <SDL.h>

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;
    if( SDL_Init(SDL_INIT_EVERYTHING) < 0 )
    {
        std::cout << "SDL could not initialise! SDL ERROR: " << SDL_GetError() << std::endl;
    }
    return 0;
}