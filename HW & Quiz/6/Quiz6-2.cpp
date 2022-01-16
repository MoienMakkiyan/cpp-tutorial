//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Sepher Heidari

#include <iostream>

using namespace std;

int orafte(string vorudi);
int irafte(string vorudi);
int tedadehalat(int n,int o,int i);

int main()
{
    int n;
    string vorudi;
    cin>>n;
    cin>>vorudi;
    int o=orafte(vorudi);
    int i=irafte(vorudi);
    cout<<tedadehalat(n,o,i);
    
}

int orafte(string vorudi)
{
    int o=0,l=vorudi.length();
    for(int i=0;i<l;i++)
    {
        if(vorudi[i]=='O')
            o++;
    }
    return o;
}

int irafte(string vorudi)
{
    int i=0,l=vorudi.length();
    for(int j=0;j<l;j++)
    {
        if(vorudi[j]=='I')
            i++;
    }
    return i;
}

int tedadehalat(int n,int o,int i)
{
    if((i==n)&&(o<=n))
    {
        return 1;
    }
    else if((o<i)&&(i<n))
    {
        return (tedadehalat(n,o,(i+1))+tedadehalat(n,(o+1),i));
    }
    else if((o==i)&&(i<n))
    {
        return tedadehalat(n,o,(i+1));
    }
}
