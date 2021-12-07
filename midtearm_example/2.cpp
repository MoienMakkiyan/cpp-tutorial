#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int m,n,k; cin>>m>>n>>k;
    if(m%k==0)
    {
        long long int u1=1;
        for(int i=0;i<n;i++)
            u1*=m;
        cout<<u1%k;
    }

    else
    {
        int w=m%k;
        long long int u2=1;
        for(int i=0;i<n;i++)
        {
            u2*=w;
            u2%=k;
        }
        cout<<u2;
    }
    return 0;
}

