#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL2_gfx.h>
#include <cmath>
#include <time.h>

using namespace std;

struct point{
    int x;
    int y;
};

int dist(point a, point b);
int nearest(point p[], int n, int i, bool b[][100]);
void set_window_color(SDL_Renderer *Renderer, int R, int G, int B);
void key_close(SDL_Event *event, SDL_Renderer *m_renderer,SDL_Window *m_window );

int main( int argc, char * argv[] )
{
    int W = 800;
    int L = 1200;
    int n;
    point p[100];
    bool b[100][100];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> p[i].x >> p[i].y;
    Uint32 SDL_flags = SDL_INIT_VIDEO | SDL_INIT_TIMER ;
    Uint32 WND_flags = SDL_WINDOW_SHOWN;//| SDL_WINDOW_FULLSCREEN_DESKTOP;//SDL_WINDOW_BORDERLESS ;
    SDL_Window *window;
    SDL_Renderer *render;
    SDL_Init( SDL_flags );
    SDL_CreateWindowAndRenderer( L, W, WND_flags, &window, &render );
    SDL_RaiseWindow(window);
    SDL_DisplayMode DM;
    SDL_GetCurrentDisplayMode(0, &DM);

    set_window_color(render, 255, 255, 255);
    SDL_Event *event = new SDL_Event();

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            b[i][j] = 0;
    int index;
    for(int i = 0; i < n; i++)
    {
        index = nearest(p, n, i, b);
        aalineRGBA(render, p[i].x, p[i].y, p[index].x, p[index].y, 0, 0, 0, 255);
    }
    SDL_RenderPresent(render);
    key_close(event, render, window);
    return 0;
}

int dist(point a, point b)
{
    return (a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y);
}
int nearest(point p[], int n, int i, bool b[][100])
{
    int index;
    int d = 1000000;
    for(int k = 0; k < n; k++)
    {
        if(k != i && d > dist(p[i], p[k]) && !b[i][k] && !b[k][i])
        {
            index = k;
            d = dist(p[i], p[k]);
        }
    }
    b[index][i] = 1;
    b[i][index] = 1;
    return index;
}


void set_window_color(SDL_Renderer *Renderer, int R, int G, int B)
{
    SDL_SetRenderDrawColor(Renderer, R, G, B, 255);
    SDL_RenderClear(Renderer);
}
void key_close(SDL_Event *event, SDL_Renderer *m_renderer,SDL_Window *m_window )
{
    while (event -> type != SDL_KEYDOWN)
    {
        SDL_PollEvent(event);
        if( event->type == SDL_KEYDOWN )
        {

            SDL_DestroyWindow( m_window );
            SDL_DestroyRenderer( m_renderer );
            IMG_Quit();
            SDL_Quit();
        }
    }

}



