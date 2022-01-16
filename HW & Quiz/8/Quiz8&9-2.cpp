//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Maziar Ghoharkesh

#include <iostream>

using namespace std;

void ForgetfulMakian (int n,int k,int f,int arr[]);

int N;

int main()
{
    int n,k;
    cin>>n>>k;
    N = n;
    int arr[n];
    for (int i=1;i<10;i++)
        ForgetfulMakian(n,k,i,arr);
}

void ForgetfulMakian (int n,int k,int f,int arr[])
{
    if(n==1)
    {
        arr[n]=f;
        for(int i=N;i>0;i--)
            cout<<arr[i];
        cout<<endl;
    }
    else {
    if (f-k >=0){arr[n]=f;ForgetfulMakian (n-1,k,f-k,arr);}
    if (f+k < 10){arr[n]=f;ForgetfulMakian (n-1,k,f+k,arr);}
    }
}
