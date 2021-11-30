//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Nika Zahedi

#include<iostream>

using namespace std;

int main()
{
    long long int i,j,k,num=0;
    cin>>i>>j>>k;
    num=k+i*(j/(i-1));
    j-=(j/(i-1))*(i-1);
    while (j>0){
        num++;
        if (num%i!=0)
            j--;

    }
    cout<<num;



    return 0;
}
