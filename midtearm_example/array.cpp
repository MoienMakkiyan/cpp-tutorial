#include <iostream>

using namespace std;

int main()
{
//    // 1D array
//    int n;
//    cin>>n;
//    int x[n];//started from 0 to n-1
//    for(int i=0;i<n;i++)
//        cin>>x[i];
//
//    for(int i=0;i<n;i++)
//        cout<<"x["<<i<<"] = "<<x[i]<<endl;


//    // 2D array
//    int m,n; cin>>m>>n;
//
//    int y[m][n];
//    for(int i=0;i<m;i++)
//        for(int j=0;j<n;j++)
//            cin>>y[i][j];
//
//    for(int i=0;i<m;i++)
//        for(int j=0;j<n;j++)
//            cout<<"y["<<i<<"]["<<j<<"] = "<<y[i][j]<<endl;


    // nD array
    // z[][][][][][][][][];

    int q[]={1,2,3,4,5,6,7,8,9};
    int my_size = sizeof(q)/sizeof(q[0]);
    cout<<my_size<<endl;
    return 0;
}
