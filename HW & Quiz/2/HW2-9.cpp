//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Amirhossein Nagdi

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
float a,b,c,d,deter;
cin>>a>>b;
cin>>c>>d;
deter=(a*d)-(b*c);
if(deter==0){
    cout<<0;
}
else{
    cout<<fixed<<setprecision(2)<<d/deter<<"\t"<<-b/deter<<endl;
    cout<<fixed<<setprecision(2)<<-c/deter<<"\t"<<a/deter;
}
}
