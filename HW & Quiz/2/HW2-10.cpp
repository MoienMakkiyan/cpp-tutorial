//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Mostafa Shiravani

#include<iomanip>>
#include <iostream>

using namespace std;

int main()
{
   float a, b , n=0 ,m=0,flag,  x;
   while(a!=0)
   {
       cin>>a;
       if(a==0)break;
       cin>>b;
       n+=b;
       m+=b*a;


   }

   cout.precision(3);
   cout<<fixed<<m/n;

}