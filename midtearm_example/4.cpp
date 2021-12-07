/// این کد مشکل دارد - در کلاس توضیح داده شد

#include <iostream>

using namespace std;

int min_row(int x[][],int n,int p);
int max_row(int x[][],int n,int p);
int min_colum(int x[][],int n,int p);
int max_colum(int x[][],int n,int p);

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    if(n==1)
        cout<<"0 0"<<endl;
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                // min row max column
                if(a[i][j]==min_row(a,n,i)&&a[i][j]==max_colum(a,n,j))
                    cout<<i<<" "<<j<<endl;
                // max row min column
                if(a[i][j]==min_colum(a,n,j)&&a[i][j]==max_row(a,n,i))
                    cout<<i<<" "<<j<<endl;
            }
        }
    }

    return 0;
}

int min_row(int x[][],int n,int p)
{
    int m = x[p][0];
    for(int i=1;i<n;i++)
        if(x[p][i]<m)
            m=x[p][i];
    return m;
}

int max_row(int x[][],int n,int p)
{
    int m = x[p][0];
    for(int i=1;i<n;i++)
        if(x[p][i]>m)
            m=x[p][i];
    return m;
}

int min_colum(int x[][],int n,int p)
{
    int m = x[0][p];
    for(int i=1;i<n;i++)
        if(x[i][p]<m)
            m=x[i][p];
    return m;
}

int max_colum(int x[][],int n,int p)
{
    int m = x[0][p];
    for(int i=1;i<n;i++)
        if(x[i][p]>m)
            m=x[i][p];
    return m;
}
