//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Mohammad Modareszade

#include<iostream>

using namespace std;

int main() {
    int n,a[20],i;
    bool found1 = true, found2 = true;

    cin >> n;
    for (i=0;i<n;i++)
        cin >> a[i];


    for (i=0; i<n-1;i++)
        if (a[i]<a[i+1])
            break;

    for (int j=i;j<n-1;j++)
        if (a[j]>=a[j+1]) {
            found2=false;
            break;
        }


    for (i = 0; i <n-1; i++)
        if (a[i] > a[i + 1])
            break;

    for (int j = i; j < n - 1; j++)
        if (a[j] <= a[j + 1]) {
            found1 = false;
            break;
        }


    if (found1 || found2)
        cout << "Yes";
    else
        cout << "No";

}