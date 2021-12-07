#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL2_gfx.h>
#include <string>
#include <math.h>

void window_color(SDL_Renderer *Renderer, int R, int G, int B);
using namespace std;

int main( int argc, char * argv[] )
{
    int W = 600;
    int L = 1200;

    Uint32 SDL_flags = SDL_INIT_VIDEO | SDL_INIT_TIMER ;
    Uint32 WND_flags = SDL_WINDOW_SHOWN;
    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
    SDL_Init( SDL_flags );
    SDL_CreateWindowAndRenderer( L, W, WND_flags, &m_window, &m_renderer );
    SDL_RaiseWindow(m_window);
    SDL_DisplayMode DM;
    SDL_GetCurrentDisplayMode(0, &DM);
    window_color(m_renderer,0,0,0);

    SDL_Event *event = new SDL_Event();

    while (1)
    {

        SDL_RenderPresent(m_renderer);

        if( SDL_PollEvent( event ) )
            {
                if( event->type == SDL_KEYDOWN )
                {
                    switch( event->key.keysym.sym )
                    {
                        case SDLK_ESCAPE:
                            {
                                SDL_DestroyWindow( m_window );
                                SDL_DestroyRenderer( m_renderer );
                                IMG_Quit();
                                SDL_Quit();
                                return 0;
                            }


                    }
                }
            }
        }
}


void window_color(SDL_Renderer *Renderer, int R, int G, int B)
{
    SDL_SetRenderDrawColor(Renderer,R,G,B,255);
    SDL_RenderClear(Renderer);
}

