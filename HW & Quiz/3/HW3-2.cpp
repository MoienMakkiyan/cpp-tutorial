//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Ayda Karimzade

#include<iostream>

using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    if(n==0)
    return 0;

    for(j=1;j<=n-1;j++)
        cout<<" ";
        cout<<"*"<<endl;

    for(i=1;i<=n-2;i++)
    {
       for(j=1;j<=n-1-i;j++)
            cout<<" ";
        for(j=1;j<=1;j++)
            cout<<"*";
        for(j=1;j<=2*i-1;j++)
            cout<<" ";
        for(j=1;j<=1;j++)
            cout<<"*"<<endl;
    }
   if(n==1)
    return 0;
     for(i=1;i<=n;i++)
        cout<<"* ";
}

