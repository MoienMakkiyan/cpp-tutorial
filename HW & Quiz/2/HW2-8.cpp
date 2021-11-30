//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Mohammadali Khoshbin

#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    double n,a,q,b,w,s,d;
    n=0;
    a=0;
    q=-1;
    s=0;
    while(n!=-1)
    {
       q++;
       a=a+n;
       s=s+n*n;
       cin>>n;
    }
//    b=(s-a*a/q)/q;
    cout<<fixed<<setprecision(2)<<(s-a*a/q)/q;
    return 0;
}
