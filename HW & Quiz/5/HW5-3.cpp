//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Kasra Khandan

#include <iostream>
#include <math.h>
using namespace std;

int D(int a);
int digit_sum(int a);
int prime_sum(int a);
bool is_prime(int n);

int main()
{
    int n,x,y=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cin>>x;
    for(int j=2;j<x;j++){
    if(D(j)==x)
    {
    y=1;
    break;
    }
    }
    if(y==0)
    cout<<"No";
    if(y==1)
    cout<<"Yes";
    if(i<n-1)
    cout<<"\n";
    y=0;
    }
    return 0;
}

int D(int a)
{
    int b;
    b=a+digit_sum(a)+prime_sum(a);
    return b;
}

int digit_sum(int a)
{
    int p=0;
    while(a>0){
    p+=a%10;
    a/=10;
    }
    return p;
}

int prime_sum(int a)
{
    int k=0;
    if(is_prime(a))
    k+=a;
    else{
    for(int i=2;i<(a/2)+1;i++){
    if(is_prime(i)&&a%i==0)
    k+=i;
    }}
    return k;
}

bool is_prime(int n)
{
    int i,flag = 1;
    for (i=2;i<=sqrt(n);i++){
    if(n%i==0){
    flag=0;
    break;
    }
    }
    if(n<=1)
    flag=0;
    if(flag==1)
    return true;
    else
    return false;
}
