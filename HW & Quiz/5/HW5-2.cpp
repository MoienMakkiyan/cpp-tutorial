//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Roja Atashkar

#include<iostream>
using namespace std;
int main()
{
    int a[8], i, j;
    for(i=0; i<8; i++)
    {
        cin>>a[i];
    }
     bool changed=true;
   for(i=7;(i>0)&&changed;i--)
    {
        changed=false;
        for(j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                changed=true;
            }
        }
    }
    cout<<a[7];
    for(i=6;i>=0;i--)
    {
        cout<<" "<<a[i];
    }
    return 0;
}
