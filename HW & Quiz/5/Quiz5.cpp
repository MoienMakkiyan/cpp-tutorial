//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Mohammadhossein Mahdikhani

#include <iostream>
using namespace std;
int gamragham ( int t )
{
    int sum=0;
       
        while (t/10!=0)
        {
            sum+=t%10;
            t=t/10;
        }

    return(sum+t);
}
int main()
{
    int n,t=0;
    cin>>n;
    char A[n];
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
        t=A[i];
        t=gamragham(t);
        while(t>9)
        {
            t=gamragham(t);
        }
        A[i]=t;
    }
    for(int i=1;i<=9;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[j]>=i)
            {
                if(i%2==1)
                {
                    cout<<0;
                }
                if(i%2==0)
                {
                    cout<<1;
                }
            }
            if(A[j]<i)
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    


    return 0;
}
