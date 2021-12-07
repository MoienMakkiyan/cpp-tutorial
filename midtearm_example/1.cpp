#include <iostream>

using namespace std;

int main()
{
    long long int n; cin>>n;

    int i = 0;

    while(n>0)
    {
        n/=10;
        i++;
    }
    cout<<i<<endl;
    return 0;
}
