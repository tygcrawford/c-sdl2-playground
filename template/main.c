#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_stdinc.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include <wchar.h>

// TODO: figure out what you need to keep

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
        SDL_Quit();
        return 1;
    }

    SDL_Renderer* ren = SDL_CreateRenderer(window, -1, 0);
    if(ren == NULL) {
        SDL_Quit();
        return 1;
    }

    const Uint32 startMs = SDL_GetTicks();
    while( SDL_GetTicks() - startMs < 5000) {
        SDL_PumpEvents();
        SDL_RenderSetLogicalSize(ren, 640, 480);
        SDL_SetRenderDrawColor(ren, 255, 0, 0, 255);
        SDL_RenderClear(ren);
        SDL_RenderPresent(ren);
    }

    SDL_Quit();

    return 0;
}
