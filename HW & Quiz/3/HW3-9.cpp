//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Kiana Kalantari

#include<iostream>

using namespace std;
int modulo(int a, int b, int n)
{
    long long x=1, y=a;
    while (b > 0)
    {
        if (b%2 == 1)
        {
            x = (x*y) % n; // multiplying with base
        }
        y = (y*y) % n; // squaring the base
        b /= 2;
    }
    return x % n;
}
int main()
{
    long long int a,n,m;
    cin>>a>>n>>m;
   cout<< modulo(a,n,m);

    return 0;
}
