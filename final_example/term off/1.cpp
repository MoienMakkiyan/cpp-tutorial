#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=n-1; j>=0; j--)
            cout<<n*j+i<<" ";
        cout<<endl;
    }
    return 0;
}
