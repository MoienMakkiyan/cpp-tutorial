//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Mohammad Morseli

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
     int n,j,b=0,i,S=0,a[100];
     cin>>n;
     char c;
     for(i=0;i<=n;i++)
     {
          c=1;
          j=0;
          while(c!=10)
         {
            c=getchar();
           if((c>='0')&&(c<='9'))
          {
               a[j]=c-'0';
               j++;
          }

           }
            a[j]=-1;
           for(j=0;a[j]!=-1;j++)
          {
          S=S+a[j];
          }
     }
     cout<<S;
     return 0;
}
