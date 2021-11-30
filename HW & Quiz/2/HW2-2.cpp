//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Mahdi Ghahari

#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,t;
    cin>>m>>n;
    if(m>n)
        {t=m;
        m=n;
        n=t;}
        i=m+1;
        for(i;i<n;i++)
        {
            for(j=2;j<=i;)
            {
                if(i%j==0)
                {
                    if(i==j)
                    {cout<<i;return 0;

                }
                else
                    break;
            }
            else
                j++;
        }
        }
        cout<<-1;
        return 0;





}
