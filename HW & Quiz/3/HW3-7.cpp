//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Mohammad Ebrahimi

#include<iostream>
using namespace std;
int f1(long long int n)
{
   long long int x;
    x=(-n+1)/4;
    return x;
}
int f2(long long int n)
{
   long long int x;
    x=(n+2)/4;
    return x;
}
int f3 (long long int n)
{
   long long int x;
    x=(n+1)/4;
    return x;
}
int f4(long long int n)
{
    long long int x;
    x=-n/4;
    return x;
}


int main ()
{
   long long int n,z,y;
    cin >> n;

    if(n%4==1)
       {z=f1(n);
        y=z;}
    if(n%4==2)
       {z=f2(n);
        y=-z+1;}
    if(n%4==3)
        {z=f3(n);
        y=z;}
    if(n%4==0)
        {z=f4(n);
        y=-z;}

    cout << z << " " << y;

}


