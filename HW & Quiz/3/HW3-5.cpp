//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Ali Arastehrad

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    double a,x,y,b,r , h=0;
    char ch;
    while(h==0)
    {
       cin>>ch;
        switch(ch)
        {

        case 'e':
            h=20;
            break;

        case 'c':
            cin>>r>>x>>y;
            r=r*r;
            x=x*x;
            y=y*y;

            if(((x+y)/r<=1.001)&&(0.999<=(x+y)/r))
                cout<<"Yes";
            else
                cout<<"No";

            break;

        case 'o':
            cin>>a>>b>>x>>y;
            a=a*a;
            b=b*b;
            x=x*x;
            y=y*y;
            x=x/a+y/b;
            if((x<=1.001)&&(0.999<=x))
                cout<<"Yes";
            else
                cout<<"No";

            break;
        }
    }
return 0;
}
