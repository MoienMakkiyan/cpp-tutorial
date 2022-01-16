//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Hossein Anjidani

#include<iostream>
#include<cmath>
#include<iomanip>
#include<string.h>

using namespace std;
short map[1500][1500];
bool seen[1500][1500];
int x,y, ret = 0;
/*int ways[1000];
int an = 0;*/
/*
int lastmove{
0 -> up
1 -> down
2 -> right
3 -> left
}
*/
void paresh(int xx, int yy,int movecount){
    //cout<<movecount<<"\t x "<<xx<<"\t y "<<yy<<"\t "<<map[xx][yy]<<endl;
    seen[xx][yy] = 1;
    if(movecount > ret) ret = movecount;
    if(xx > 0){
        if(abs(map[xx - 1][yy] - map[xx][yy]) == 1  && seen[xx - 1][yy] == 0){
            // move to left
            paresh(xx - 1, yy, movecount + 1);
        }
    }
    if(xx < x - 1){
        if(abs(map[xx + 1][yy] - map[xx][yy]) == 1  && seen[xx + 1][yy] == 0){
            // move to right
            paresh(xx + 1, yy, movecount + 1);
        }
    }   
    if(yy < y - 1){
        if(abs(map[xx][yy + 1] - map[xx][yy]) == 1 && seen[xx][yy + 1] == 0){
            // move to down
            paresh(xx, yy + 1, movecount + 1);
        }
    }
    if(yy > 0){
        if(abs(map[xx][yy - 1] - map[xx][yy]) == 1  && seen[xx][yy - 1] == 0){
            // move to up
            paresh(xx, yy - 1, movecount + 1);
        }
    }

    seen[xx][yy] = 0;
}

/*void printmax(){
    if(an == 0) cout<<0;
    else{
        int max = ways[0];
        for(int i = 1; i < an; i++)
            if(max < ways[i])
                max = ways[i]
    }
    
}*/

int main()
{
    cin>>y>>x;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin>>map[i][j];
            seen[i][j] = 0;
        }
    }
    /*for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout<<map[i][j]<<" ";
        }
        cout<<endl;
    }*/
    for(int i = 0; i < x; i++)
        for(int j = 0; j < y; j++)
            paresh(i, j, 1);
    if(ret != 0)    cout<<ret;
    else            cout<<0;
    return 0;
}
