//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Hamed Abdollahi

#include <iostream>
using namespace std;

int main()
{
    string s[1000],example;
    int t,end,k=0;
    for(int i=0;true;i++)
    {
        cin>>s[i];
        t=s[i].length();
        for(int j=0;j<t;j++)
        {
            if(s[i][j]<97)
                s[i][j]+=32;
        }
        if(s[i]=="end")
        {
            end=i-1;
            break;
        }
    }
    cin>>example;
    t=example.length();
    for(int j=0;j<t;j++)
    {
        if(example[j]<97)
            example[j]+=32;
    }
    for(int i=0;i<=end;i++)
    {
        if(s[i].length()>=t)
        {
        for(int j=0;j<=s[i].length()-t;j++)
        {
            if(example==s[i].substr(j,t))
                k++;
        }
        }
    }
cout<<k;

 return 0;
}

