//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Alireza Zamani

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long int n , x ;
    cin >> n ;
    for (long int i=2 ; i<=n ; i++){
        x=0 ;
        while (n%i == 0){
            n=n/i;
            ++x;
        }
        if (x >= 1){
            cout << i  ;
            cout <<  "\t" << x ;
            if( n >= 2){
            cout << endl ;
            }
            else {
            return 0 ;
            }
        }
    }
}
