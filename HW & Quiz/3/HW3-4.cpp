//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Amirhossein Shirdel

#include<iostream>
using namespace std;
int main()
{
    long long int n , B;
    int b , i=0 , j , a=0 , I;
    cin>>n>>b;
    B=n;
    while(B>0)
    {
        B/=b;
        i++;
    }
    I=i;
    while(n>0)
    {
        B=1;
        for(j=1;j<i;j++)
            B*=b;
        if(n/B<=9)
            cout<<n/B;
        else if(n/B==10)
            cout<<"A";
        else if(n/B==11)
            cout<<"B";
        else if(n/B==12)
            cout<<"C";
        else if(n/B==13)
            cout<<"D";
        else if(n/B==14)
            cout<<"E";
        else if(n/B==15)
            cout<<"F";
        i--;
        n%=B;
        a++;
    }
    for(j=1;j<=I-a;j++)
        cout<<"0";
    return 0;
}
