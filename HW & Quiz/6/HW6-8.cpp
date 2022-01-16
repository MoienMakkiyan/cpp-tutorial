//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Heliya Shakeri

#include <iostream>
using namespace std;
void getmatrix (int place[8][8]);
int rokhrisks (int place[8][8]);
int vazirrisks (int place[8][8], int i, int j);
int findrokhrisks (int place[8][8]);
int findvazirrisks (int place[8][8]);
int main()
{
    int i,j,risks=0;
    int place[8][8];
    getmatrix(place);
    risks=findrokhrisks(place)+findvazirrisks(place);
    cout<<risks;
return 0;
}
void getmatrix(int place[8][8])
{
    int i,j;
    for(i=0; i<8; i++)
        for(j=0; j<8; j++)
            cin>>place[i][j];

}
int rokhrisks (int place[8][8], int i, int j)
{
    int cnt2=0;
    int a,b;
    for(a=0; a<8; a++)
        if(place[a][j] != 0)
            cnt2++;
    for(b=0; b<8; b++)
        if(place[i][b] != 0)
            cnt2++;
    return cnt2-2;
}

int vazirrisks (int place[8][8], int i, int j)
{
    int cnt1=0;
    int k,i1,i2,j1,j2;
    bool flagi1=true,flagi2=true,flagj1=true,flagj2=true;
    for(k=0; k<8; k++)
    {
        i1=i+k;
        i2=i-k;
        j1=j+k;
        j2=j-k;
        if((i1<0)||(i1>=8))
            flagi1=false;
        if((j1<0)||(j1>=8))
            flagj1=false;
        if((i2<0)||(i2>=8))
            flagi2=false;
        if((j2<0)||(j2>=8))
            flagj2=false;

        if( (flagi1) && (flagj1) && (place[i+k][j+k] !=0) )
            cnt1++;
        if( (flagi2) && (flagj2) && (place[i-k][j-k] !=0) )
            cnt1++;
        if( (flagi1) && (flagj2) && (place[i+k][j-k] !=0) )
            cnt1++;
        if( (flagi2) && (flagj1) && (place[i-k][j+k] !=0) )
            cnt1++;
    }
    return cnt1-4;


}

int findrokhrisks (int place[8][8])
{
    int cnt2=0;
    int i,j;
    for(i=0; i<8; i++)
        for(j=0; j<8; j++)
            if(place[i][j] == 2)
            {
                cnt2+=rokhrisks(place,i,j);
            }
    return cnt2;
}

int findvazirrisks (int place[8][8])
{
    int cnt1=0;
    int i,j;
    for(i=0; i<8; i++)
        for(j=0; j<8; j++)
            if(place[i][j] == 1)
            {
                cnt1+=rokhrisks(place,i,j);
                cnt1+=vazirrisks(place,i,j);
            }
    return cnt1;
}


