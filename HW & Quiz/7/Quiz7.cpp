//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Mohammad Morseli

#include <iostream>
#define ll long long
using namespace std;
ll mabana[10000];
ll ansa[10000];
int f(ll k)
{
     ll ans=1;
     mabana[0]=1;
     ll had=0;
     while(ans<=1e16)
     {
         ans*=k;
         mabana[++had]=ans;
     }
     return had;
}
int main()
{
     ll n,k;
     cin>>n>>k;
     ll had=f(k);
     for(int i=0 ; i<n ; i++)
        {
         ll a;
         cin>>a;
         for(int j=had-1 ; j>=0 ; j--)
         {
             for(int w=k-1 ; w>=1 ; w--)
             {
                 if((mabana[j]*w)<=a)
                 {
                     a-=(mabana[j]*w);
                     ansa[j]+=w;
                 }
             }
         }
        }
        for(int i=0 ; i<100 ; i++)
        {
            if(ansa[i]>1)
            {
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
}
