//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Zahra Esmaieli

#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
{
    cin>>a[i];
}
cout<<(max_element(a, a + n)-a)+1;
}

