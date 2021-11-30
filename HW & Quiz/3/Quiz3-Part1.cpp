//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Ali Kochakzade

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main () {
    double n,money,c;
    string name;
    cin>>n>>money;
    while (n>0) {
        cin>>name;
        cin>>c;
        if (name=="S") {money+=c;}
        else if (name=="B") money-=c;
        n--;
    }
    if (floor(money)!=money) cout<<fixed<<setprecision(3)<<money; else cout<<money;
    return 0;
}
