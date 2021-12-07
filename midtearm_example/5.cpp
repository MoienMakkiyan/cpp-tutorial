// this code written by Amirreza Dehghani

///توجه داشته باشید این بهینه ترین حالت نیست و میتوانست بهتر باشد


#include <iostream>
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL2_gfx.h>
#include <string>


// by Dr Arasteh
// by Dr Vosoghi Vahdat
// by MohammadAmin Alamalhoda  ma.alamalhoda@gmail.com


using namespace std;
void window_color(SDL_Renderer *Renderer, int R, int G, int B);
void rect(SDL_Renderer *Renderer, int x,int y,int w,int h,int R, int G, int B, int fill_boolian );
void ellipse(SDL_Renderer *Renderer, int x, int y, int Radius1, int Radius2, int R, int G, int B, int fill_boolian);
void my_line(SDL_Renderer *Renderer, int x_1, int y_1, int L,double theta,int widht, int R, int G, int B );



int main( int argc, char * argv[] )
{

int W = 480;//ertefa safhe
    int L = 1200;//tool safhe
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
    // be ina kari nadashte bashid




/*
 window_color(m_renderer,0,200,200);
   rect(m_renderer,x_z,y_z,w_z, h_z,R_z,G_z,B_z,1);
     rect(m_renderer,x_t,y_t,w_t,h_t,150,150,200,1);
  ellipse(m_renderer,x_e1,y_e1,Radius,Radius,120,70,70,1);
       ellipse(m_renderer,x_e2,y_e1,Radius,Radius,120,70,70,1);
 rect(m_renderer,x_t2,y_t2,w_t2,h_t2,120,100,100,1);
 my_line(m_renderer,x_L,y_L,L_L,theta_L,10,100,140,140 );

SDL_RenderPresent(m_renderer);

*/
int n,d,i=1,x1=600,y1=240;
cin>>n>>d;
//int W = 480;//ertefa safhe
  //  int L = 1200;//tool safhe
  window_color(m_renderer,0,200,200);

  while(i<=n){
  if(i%4==1){
my_line(m_renderer,x1,y1,(i/2+1)*d,3*3.1415/2,2,100,140,140 );
y1+=(i/2+1)*d;}
  if(i%4==2){
my_line(m_renderer,x1,y1,(i/2)*d,0,2,100,140,140 );
x1+=(i/2)*d;}
  if(i%4==3){
my_line(m_renderer,x1,y1,(i/2+1)*d,3.1415/2,2,100,140,140 );
y1-=(i/2+1)*d;}
  if(i%4==0){
my_line(m_renderer,x1,y1,(i/2)*d,3.1415,2,100,140,140 );
x1-=(i/2)*d;}
  i++;}
SDL_RenderPresent(m_renderer);









  int RNX = 200, RNY = 200;
SDL_Event *event = new SDL_Event();
bool quit=false;
while (1)
        {
window_color(m_renderer,0,200,200);





if( SDL_PollEvent( event ) )
            {
                if( event->type == SDL_KEYDOWN )
                {
                    switch( event->key.keysym.sym )
                {
                    case SDLK_w:
{


  break;
}
                    case SDLK_s:{

  break;
                            }
                       case SDLK_a:
                               {

                               break;
                               }
                                case SDLK_d:
                        {
                  break;
                        }

                                case SDLK_ESCAPE:
                                        {

                        SDL_DestroyWindow( m_window );
                        SDL_DestroyRenderer( m_renderer );
                        SDL_Quit();
                        return 0;
                        break;
                }}

            }

        }
        }

}






void my_line(SDL_Renderer *Renderer, int x_1, int y_1, int L, double theta,int widht, int R, int G, int B )

{

    int x_2 = x_1 + L*cos(theta);

    int y_2 = y_1 - L*sin(theta);







    thickLineRGBA(Renderer,x_1,y_1,x_2,y_2,widht,R,G,B,255);

  //  SDL_RenderPresent(Renderer);



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

   // SDL_RenderPresent(Renderer);



}



void ellipse(SDL_Renderer *Renderer, int x, int y, int Radius1, int Radius2, int R, int G, int B, int fill_boolian)

{

    if(fill_boolian==1)
        filledEllipseRGBA(Renderer,x,y,Radius1,Radius2,R,G,B,255);

    if(fill_boolian==0)

        ellipseRGBA(Renderer,x,y,Radius1,Radius2,R,G,B,255);

   // SDL_RenderPresent(Renderer);

}



void window_color(SDL_Renderer *Renderer, int R, int G, int B)

{

    SDL_SetRenderDrawColor( Renderer, R, G, B, 255 );

    SDL_RenderClear( Renderer );



    // Show the window

  //SDL_RenderPresent( Renderer );



}

