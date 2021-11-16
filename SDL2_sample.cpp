#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL2_gfx.h>
#include <string>
#include <math.h>

void window_color(SDL_Renderer *Renderer, int R, int G, int B);
void rect(SDL_Renderer *Renderer, int x,int y,int w,int h,int R, int G, int B, int fill_boolian );
void ellipse(SDL_Renderer *Renderer, int x, int y, int Radius1, int Radius2, int R, int G, int B, int fill_boolian);
using namespace std;

int main( int argc, char * argv[] )
{
    int W = 480;
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
    int x1=0;
    int x2=1000;
    int sign1=1;
    int sign2=-1;
    int i1=2;
    int i2=3;
    while(true)
    {
        rect(m_renderer,x1,120,200,200,0,55,255,1);
        rect(m_renderer,x2,120,200,200,0,245,20,1);
        if(abs(x1-x2)<=200)
           {
               if(x1-x2<0)rect(m_renderer,x2,120,200-abs(x1-x2),200,255,abs(x1-x2)*1.257,abs(x1-x2)*1.257,1);
               if(x1-x2>0)rect(m_renderer,x1,120,200-x1+x2,200,255,abs(x1-x2)*1.257,abs(x1-x2)*1.257,1);
           }
        SDL_RenderPresent(m_renderer);
        SDL_Delay(5);
        rect(m_renderer,x1,120,200,200,0,0,0,1);
        rect(m_renderer,x2,120,200,200,0,0,0,1);
        x1+=(i1*sign1);
        x2+=(i2*sign2);
        if(x1<0||x1>1000) sign1*=-1;
        if(x2<0||x2>1000) sign2*=-1;
    }


int RNX = 200, RNY = 200;
SDL_Event *event = new SDL_Event();

while (1)
        {


        if( SDL_PollEvent( event ) )
        {
            //If a key was pressed
            if( event->type == SDL_KEYDOWN )
            {
                //Set the proper message surface
                switch( event->key.keysym.sym )
                {
                    case SDLK_w:
                        RNY = RNY+50;

                    case SDLK_s:
                        RNY = RNY-50;

                    case SDLK_a:
                        RNX = RNX-50;

                    case SDLK_d:
                        RNX = RNX+50;

                }
                //clear_object(m_renderer, 255, 255, 255);
                //rect(RNX,RNY,40,40,0,0,0,m_renderer);
            }

            //If the user has Xed out the window
            else if( event->type == SDL_QUIT )
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


void rect(SDL_Renderer *Renderer, int x,int y,int w,int h,int R, int G, int B, int fill_boolian )
{
    SDL_Rect rectangle ;
    rectangle.x = x;
    rectangle.y = y;
    rectangle.w = w;
    rectangle.h = h;
    SDL_SetRenderDrawColor(Renderer, R, G, B, 255);
    if (fill_boolian==1)
        SDL_RenderFillRect(Renderer, &rectangle);
    SDL_RenderDrawRect(Renderer, &rectangle);
}

void window_color(SDL_Renderer *Renderer, int R, int G, int B)
{
    SDL_SetRenderDrawColor(Renderer,R,G,B,255);
    SDL_RenderClear(Renderer);
    SDL_RenderPresent(Renderer);
}
