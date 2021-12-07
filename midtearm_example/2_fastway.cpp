#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    long long int   number, power, mod, remain = 1;

    cin >> number >> power >> mod;

    number = number % mod;

    if( number == 0){
        cout << 0;
    }
    while( power > 0){
        if((power % 2 ) == 1 ){
            remain = (remain * number) % mod;
        }

        power = power / 2;
        number = ( number * number ) % mod ;
    }
    if( number != 0){
        cout << remain;
    }


}
