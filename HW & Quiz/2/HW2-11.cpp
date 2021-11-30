//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Amirmohammad Khaiami

#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(y1==y2)
    {
        if(y1==y3 && ( x1>x3) && (x3>x2))
            cout<<abs(x2-x1)+2;
        else if(y1==y3 && ( x2>x3) && (x3>x1))
            cout<<abs(x2-x1)+2;
        else
            cout<<abs(x2-x1);
    }
    else if (x1==x2)
    {
        if(x1==x3 && ( y1>y3) && (y3>y2))
            cout<<abs(y2-y1)+2;
        else if(x1==x3 && ( y2>y3) && (y3>y1))
            cout<<abs(y2-y1)+2;
        else
            cout<<abs(y2-y1);
    }

    else
        cout<<abs(y2-y1)+abs(x2-x1);
    return 0;

}
