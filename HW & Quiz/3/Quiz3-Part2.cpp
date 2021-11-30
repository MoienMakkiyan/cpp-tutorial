//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Amirhossein Dehghanpour

#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,n;
    cin>>a>>b>>c;
    cin>>n;
    while(n>0){
        cin>>d>>e>>f;
        n--;
    }
    if(d>a){ d=a;}  if(e>b){ e=b;} if(f>c){ f=c;}
    if(d>e && d>f){ cout<<"1"<<endl<<a-d;}
    if(e>d && e>f){ cout<<"2"<<endl<<b-e;}
    if(f>d && f>e){ cout<<"3"<<endl<<c-f;}
}
