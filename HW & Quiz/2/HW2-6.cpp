//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Yekta Nasiri

#include<iostream>
#include<math.h>
using namespace std;
int main(){
int i, r, N=0, j=0;
long int n;
cin>>n>>i;
while(n>=1){
    r = n % 10;
    if(r != i){
        N = N + r * (pow(10,j));
        j++;
    }
    else N = N;
    n = n / 10;
}
if(N!=0 || N == 0 && j != 0) cout<<N;
else cout<<-1;
return 0;
}