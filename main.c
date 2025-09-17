#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>

int main(int argc, char* argv[]) {
    SDL_Window* window = NULL;

    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        // Handle error
        return 1;
    }

    // Create a window
    window = SDL_CreateWindow(
        "Minimal SDL Window",         // Window title
        SDL_WINDOWPOS_UNDEFINED,      // Initial x position
        SDL_WINDOWPOS_UNDEFINED,      // Initial y position
        640,                          // Width
        480,                          // Height
        SDL_WINDOW_SHOWN              // Flags
    );

    if (window == NULL) {
        // Handle error
        SDL_Quit();
        return 1;
    }

    // A simple delay to keep the window open for a short period
    SDL_Delay(3000); // 3 seconds

    // Destroy the window
    SDL_DestroyWindow(window);

    // Quit SDL subsystems
    SDL_Quit();

    return 0;
}
