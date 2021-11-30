#include <iostream>
#include <SDL2/SDL.h> // window and renderer and basic configure
#include <SDL2/SDL_image.h> // loading BitMap images on window
#include <SDL2/SDL2_gfx.h> // extra useful function
#include <string>
#include <math.h>


void window_color(SDL_Renderer *Renderer, int R, int G, int B);
void rect(SDL_Renderer *Renderer, int x,int y,int w,int h,int R, int G, int B, int fill_boolian );
void ellipse(SDL_Renderer *Renderer, int x, int y, int Radius1, int Radius2, int R, int G, int B, int fill_boolian);
using namespace std;


int main( int argc, char * argv[] )
{
    int W = 480;
    int L = 800;

    // be ina kari nadashte bashid
    Uint32 SDL_flags = SDL_INIT_VIDEO | SDL_INIT_TIMER ;
    Uint32 WND_flags = SDL_WINDOW_SHOWN;//| SDL_WINDOW_FULLSCREEN_DESKTOP;//SDL_WINDOW_BORDERLESS ;
    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
    SDL_Init( SDL_flags );
    SDL_CreateWindowAndRenderer( L, W, WND_flags, &m_window, &m_renderer );
    //Pass the focus to the drawing window
    SDL_RaiseWindow(m_window);
    //Get screen res olution
    SDL_DisplayMode DM;
    SDL_GetCurrentDisplayMode(0, &DM);


    window_color(m_renderer,255,255,255);

    int r1=40;
    int r2=40;
    int sign=1;
    int i=0;
    double time=20;
    for (int y=80;;y+=1*sign)
    {
        if(y>430&&i%2==0&&r2>20&&i!=10) r2--;
        if(y>430&&i%2==1&&r2<=40) r2++;
        if (y==460) {sign*=-1;i++;}
        if (y==240&&i==1) {sign*=-1;i++;}
        if (y==336&&i==3) {sign*=-1;i++;}
        if (y==394&&i==5) {sign*=-1;i++;}
        if (y==400&&i==7) {sign*=-1;i++;}
        if (y==420&&i==9) {sign*=-1;i++;}

        if (y<=260&&i==1) time+=0.5;
        if (y<=356&&i==3) time+=0.5;
        if (y<=414&&i==5) time+=0.5;
        if (y<=420&&i==7) time+=0.5;
        if (y<=440&&i==9) time+=0.5;

        if (y<=260&&i==2) time-=0.5;
        if (y<=356&&i==4) time-=0.5;
        if (y<=414&&i==6) time-=0.5;
        if (y<=420&&i==8) time-=0.5;
        if (y<=440&&i==10) time-=0.5;


        if (y==439&&i==10) sign*=0;
        if (y>80&&i%2==0) time=-.00001;
        ellipse(m_renderer,400,y,r1,r2,255,0,0,1);
        SDL_RenderPresent(m_renderer);
        SDL_Delay(time);
        ellipse(m_renderer,400,y,r1,r2,255,255,255,1);
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
    SDL_RenderPresent(Renderer);
}

void ellipse(SDL_Renderer *Renderer, int x, int y, int Radius1, int Radius2, int R, int G, int B, int fill_boolian)
{
    if(fill_boolian==1)
        filledEllipseRGBA(Renderer,x,y,Radius1,Radius2,R,G,B,255);
    if(fill_boolian==0)
        ellipseRGBA(Renderer,x,y,Radius1,Radius2,R,G,B,255);
}

void window_color(SDL_Renderer *Renderer, int R, int G, int B)
{
    SDL_SetRenderDrawColor( Renderer, R, G, B, 255 );
    SDL_RenderClear( Renderer );

    // Show the window
    SDL_RenderPresent( Renderer );
}
