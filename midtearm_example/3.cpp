#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n);

int main()
{
    int n;
    cin>>n;
    int k=0;//برای شمارش تعداد عوامل اول چاپ شده
    for(int i=2;i<=n;i++)
        if(n%i==0)
        {
            if(isPrime(i))
            {
                if(k!=0) cout<<" ";
                cout<<i;
                k++;
            }
        }
    return 0;
}

bool isPrime(int n)
{
    int j=0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            j++;
    if(j==0) return true;
    else return false;
}
