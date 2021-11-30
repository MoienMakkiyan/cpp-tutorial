//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Parsa Palizian

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{   int n,i;
    float a,b,x;
    cin>>n;
    cin>>x;
    a=1;
    b=0;
    for(i=1;i<=n;i++)
    {
        b+=a;
        a=a*x/i;
    }
    std::cout << std::fixed<< std::setprecision(2);
    cout<<b;
    return 0;
}
