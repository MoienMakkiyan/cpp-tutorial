//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Reza Mirzabayati

#include <iostream>

using namespace std;

int main()
{
    string s1,s2,s3;
    int i,j,k,l=0;
    int a[10]={1,2,3,4,5,6,7};
    cin>>i;
    for(int x=0;x<i;x++)
        {
            cin>>s1;
            if(s1=="shanbe")
                a[0]-=1;
            else if(s1=="1shanbe")
                a[1]-=2;
            else if(s1=="2shanbe")
                a[2]-=3;
            else if(s1=="3shanbe")
                a[3]-=4;
            else if(s1=="4shanbe")
                a[4]-=5;
            else if(s1=="5shanbe")
                a[5]-=6;
            else if(s1=="jome")
                a[6]-=7;
        }
    cin>>j;
    for(int x=0;x<j;x++)
        {
            cin>>s2;
            if(s2=="shanbe")
                a[0]-=1;
            else if(s2=="1shanbe")
                a[1]-=2;
            else if(s2=="2shanbe")
                a[2]-=3;
            else if(s2=="3shanbe")
                a[3]-=4;
            else if(s2=="4shanbe")
                a[4]-=5;
            else if(s2=="5shanbe")
                a[5]-=6;
            else if(s2=="jome")
                a[6]-=7;
        }
    cin>>k;
    for(int z=0;z<k;z++)
        {
            cin>>s3;
            if(s3=="shanbe")
                a[0]-=1;
            else if(s3=="1shanbe")
                a[1]-=2;
            else if(s3=="2shanbe")
                a[2]-=3;
            else if(s3=="3shanbe")
                a[3]-=4;
            else if(s3=="4shanbe")
                a[4]-=5;
            else if(s3=="5shanbe")
                a[5]-=6;
            else if(s3=="jome")
                a[6]-=7;
        }
    for(int x=0;x<7;x++)
        if(a[x]>0)
            l++;
    cout<<l;
    return 0;
}
s