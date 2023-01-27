#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL2_gfx.h>
#include <SDL2/SDL_ttf.h>
#include <string>
#include <math.h>


void window_color(SDL_Renderer *Renderer, int R, int G, int B);
void TextBox();

using namespace std;
string name="";

SDL_Window *m_window;
SDL_Renderer *m_renderer;

int main( int argc, char * argv[] )
{
    int W = 800;
    int L = 1280;
    Uint32 SDL_flags = SDL_INIT_VIDEO | SDL_INIT_TIMER ;
    Uint32 WND_flags = SDL_WINDOW_SHOWN;

    SDL_Init( SDL_flags );
    SDL_CreateWindowAndRenderer( L, W, WND_flags, &m_window, &m_renderer );
    SDL_RaiseWindow(m_window);
    SDL_DisplayMode DM;
    SDL_GetCurrentDisplayMode(0, &DM);
    window_color(m_renderer,255,255,255);
    SDL_Event *e = new SDL_Event();
            TextBox();
    cout << "khar";

    SDL_RenderPresent(m_renderer);

SDL_Event *event = new SDL_Event();

while (1)
        {


        if( SDL_PollEvent( event ) )
        {
            if( event->type == SDL_QUIT )
            {
                //Quit the program
                SDL_DestroyWindow( m_window );
                SDL_DestroyRenderer( m_renderer );
                IMG_Quit();
                SDL_Quit();
                return 0;
            }
        }
}
}

void window_color(SDL_Renderer *Renderer, int R, int G, int B)
{
    SDL_SetRenderDrawColor(Renderer,R,G,B,255);
    SDL_RenderClear(Renderer);
    SDL_RenderPresent(Renderer);
}

void TextBox()
{

    int font =2;
    bool caps_lock = false;
    int x_position=0;
    int y_position=0;
    int R=0;
    int G =0;
    int B=0;
    int A=0.5;
    int W = 1280;
    int H = 800;
    bool quit = false ;
    char ch=0;
    SDL_Event *event = new SDL_Event();
    while (!quit)
    {
        SDL_RenderPresent(m_renderer);
        if(SDL_PollEvent(event))
        {
            if(event -> type == SDL_KEYUP)
            {
                switch(event->key.keysym.sym)
                {
                    case SDLK_SPACE:
                    //quit = true;
                    ch = ' ';
                    break;
                    case SDLK_RETURN:
                    quit = true;
                    break;
                    case SDLK_CAPSLOCK:
                    ch=0;
                    caps_lock = !caps_lock;
                    break;
                    case SDLK_BACKSPACE:
                    ch = 0;
                    if(name.length()!=0)
                    {
                    textRGBA(m_renderer, x_position, y_position, name.c_str(), font, 75, 255, 255 , 255, A);
                    name = name.substr(0,name.length()-1);
                    }
                    break;
                    default :
                    if(event->key.keysym.sym != SDLK_UP && event->key.keysym.sym != SDLK_DOWN && event->key.keysym.sym != SDLK_LEFT && event->key.keysym.sym != SDLK_RIGHT)
                    ch = event->key.keysym.sym;
                    break;
                }
                if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch == ' ') && name.length()<25 && !quit)
                {
                    if(caps_lock == 1 && ch != ' ')
                    name+=ch + 'A' - 'a';
                    else
                    name+=ch ;
                }
                if(name != "" && !quit)
                textRGBA(m_renderer, x_position, y_position, name.c_str(), font, 75, R, G, B, A);
            }
        }
    }
}
