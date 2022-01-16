//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Ariya Behzad

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
       {
          if(i>0)
          {
            for(int z=i-1;z>=0;z--)
            {
               cout<<s[i]<<": salam "<<s[z]<<"!"<<endl;
            }
          }
    }
   for(int i=0;i<n;i++)
    {
        cout<<s[i]<<": khodafez bacheha!"<<endl;
        if(i!=n)
            for(int z=i+1;z<n;z++)
        {
            cout<<s[z]<<": khodafez "<<s[i]<<"!"<<endl;
        }
    }
    return 0;
}

