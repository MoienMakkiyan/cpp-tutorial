//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by SeyedAli Mirafzali

#include <iostream>


using namespace std;

int main()
{
   int a;
     cin>>a;
     if(a<0)
     {
          a=-a;
          cout<<"1";
     }
     else{cout<<"0";}

     for(int i=30 ; i>=0; i--)
     {
          if((a>>i)%2==0) cout<<"0";
          else cout<<"1";
     }
return 0;
}
