//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Abilfazl Hatami

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

bool isPrime(int x);
char U(long long int a[],long long int n,long long int x);
char R(long long int a[],long long int n,long long int x);
char L(long long int a[],long long int n,long long int x);
char D(long long int a[],long long int n,long long int x);


int main()
{
    long long int t,A[10000],i,j,x,y,a,b,n,X,H,k,N=0;
    char str[10000];
    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(j=0;j<(n*n);j++)
        {
            cin>>A[j];
        }
        cin>>a>>b>>x>>y;

        X = a*n + b;

        H = x*n + y;

        k = 0;

        while(X!=H)
        {

            if(D(A,n,X)!='D' && L(A,n,X)!='L' && R(A,n,X)!='R' && U(A,n,X)!='U')
            {
                str[N]='Q';
                N++;
                break;
            }


            if(U(A,n,X)=='U' )
            {
                A[X]=1;
                str[N+k]='U';
                k++;
                X = X - n;
            }



            if(L(A,n,X)=='L')
            {
                A[X]=1;
                str[N+k]='L';
                k++;
                X = X - 1;
            }

            if(D(A,n,X)=='D')
            {
                A[X]=1;
                str[N+k]='D';
                k++;
                X = X + n;
            }



            if(R(A,n,X)=='R')
            {
                A[X]=1;
                str[N+k]='R';
                k++;
                X = X + 1;
            }




        }

        if(X==H)
        {
            str[N+k]='S';
            N += k;
            N++;
        }

    }


    for(i=0;i<N;i++)
    {
        if(str[i] == 'S')
        {
            cout<<endl;
        }

        if(str[i] == 'Q')
        {
            cout<<"No Monaseb Masir!"<<endl;
        }

        if(str[i]!='Q' && str[i]!='S')
            cout<<str[i];
    }
}



bool isPrime(long long int x)
{
    if(x<=1)
        return false;

    long long int i;

    for(i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }

    return true;
}








char U(long long int a[],long long int n,long long int x)
{
    if(x-n<0)
        return 'N';

    if(isPrime(a[x-n]))
        return 'U';
    else
        return 'N';
}


char R(long long int a[],long long int n,long long int x)
{
    if((x%n) == n-1)
        return 'N';


    if(isPrime(a[x+1])==true)
        return 'R';
    else
        return 'N';
}



char L(long long int a[],long long int n,long long int x)
{
    if((x%n) == 0)
        return 'N';

    if(isPrime(a[x-1]))
        return 'L';
    else
        return 'N';
}



char D(long long int a[],long long int n,long long int x)
{
    if(x+n >= (n*n))
        return 'N';

    if(isPrime(a[x+n]))
        return 'D';
    else
        return 'N';
}

