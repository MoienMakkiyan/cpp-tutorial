#include <iostream>

using namespace std;

int largest_I(int I);
int largest_J(int J) ;
int min_I(int I);
int min_J(int J);

int n;
int x[101][101]={};

int main()
{
    int w=0;
    int i,j;
    cin>>n;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>x[i][j];

    if(n==1)
    {
        cout<<"0 0"<<endl;return 0;
    }

    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((largest_I(i)==x[i][j])&&(min_J(j)==x[i][j]))
            {
                cout<<i<<" "<<j<<endl;
                w++;
            }
            if((largest_J(j)==x[i][j])&&(min_I(i)==x[i][j]))
            {
                cout<<i<<" "<<j<<endl;
                w++;
            }
        }

    }


    if (w==0) cout<<"NO";



}
int largest_I(int I)
{
    int i;
    int max = x[I][0];
    for (i = 1; i < n; i++)
        if (x[I][i] > max)
            max = x[I][i];

    return max;
}

int largest_J(int J)
{
    int i;
    int max = x[0][J];
    for (i = 1; i < n; i++)
        if (x[i][J] > max)
            max = x[i][J];

    return max;
}

int min_I(int I)
{
    int i;
    int min = x[I][0];
    for (i = 1; i < n; i++)
        if (x[I][i] < min)
            min = x[I][i];

    return min;
}

int min_J(int J)
{
    int i;
    int min = x[0][J];
    for (i = 1; i < n; i++)
        if (x[i][J] < min)
            min = x[i][J];

    return min;
}

