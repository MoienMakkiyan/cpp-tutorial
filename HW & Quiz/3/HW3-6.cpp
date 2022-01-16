//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Amirreza Zameni

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{ string b; int temp,n,sum=0;
cin>>n;
for(true;n>0;n--){
    cin>>b;
    for (int i = 0; i < b.length(); i++){
        temp = (b[i] - '0') ; sum=temp+sum;
}}
cout<<sum;
}

