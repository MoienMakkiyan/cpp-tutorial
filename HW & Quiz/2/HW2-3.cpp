//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Amin Zamani

#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int a , b , c ;
    cin >> a >> b >> c ;
    if (a > b)
    {
    if(c > a)
    {
    if(c*c == a*a + b*b){ cout << "YES";}else{ cout << "NO";}
    }else{
    if(a*a == c*c + b*b){ cout << "YES";}else{ cout << "NO";} }
    } else {
    if(c > b)
    {
    if(c*c == a*a + b*b){ cout << "YES";}else{ cout << "NO";}
    }else{
    if(b*b == a*a + c*c){ cout << "YES";}else{ cout << "NO";}
    }
    }
        return 0 ;
}

