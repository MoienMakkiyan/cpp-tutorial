//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Mohammadali Khoshbin

#include <iostream>
using namespace std;
int main()
{
    int s1,s2,s3,a[100][100],b[100][100],c[100][100],n,m,i,j=1;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    for(i=0;i<s1;i++)
    {
                for(j=0;j<s2;j++)
                {
                cin>>a[i][j];
                }

    }


    for(i=0;i<s2;i++)
    {
                for(j=0;j<s3;j++)
                {
                cin>>b[i][j];
                }
    }
     for (int i = 0; i < s1; i++) {
        for (int j = 0; j < s3; j++) {
            c[i][j] = 0;

            for (int k = 0; k < s2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }

            cout << c[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}
