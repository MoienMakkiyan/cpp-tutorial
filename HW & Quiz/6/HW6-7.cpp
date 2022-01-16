//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Amirhossein Naghdi

#include <iostream>

using namespace std;

int main()
{
int n,i,j,flag=0 ;
cin>>n;
int arr[n][n];
int minrow[n],maxcol[n],maxrow[n],mincol[n];
for(i=0;i<=n-1;i++){
    for(j=0;j<=n-1;j++){
    cin>>arr[i][j];
}
}

for(i=0;i<=n-1;i++){
        minrow[i]=arr[i][0];
    for(j=0;j<=n-1;j++){
        if(minrow[i]>arr[i][j])
            minrow[i]=arr[i][j];
    }
}
for(i=0;i<=n-1;i++){
    maxrow[i]=arr[i][0];
    for(j=0;j<=n-1;j++){
        if(maxrow[i]<arr[i][j])
            maxrow[i]=arr[i][j];
    }
}
for(j=0;j<=n-1;j++){
    maxcol[j]=arr[0][j];
    for(i=0;i<=n-1;i++){
        if(maxcol[j]<arr[i][j])
            maxcol[j]=arr[i][j];
    }
}
for(j=0;j<=n-1;j++){
    mincol[j]=arr[0][j];
    for(i=0;i<=n-1;i++){
        if(mincol[j]>arr[i][j])
            mincol[j]=arr[i][j];
    }
}

for(i=0;i<=n-1;i++){
    for(j=0;j<=n-1;j++){
            if((minrow[i]==arr[i][j] &&  maxcol[j]==arr[i][j])||(maxrow[i]==arr[i][j] &&  mincol[j]==arr[i][j])){
                cout<<i+1<<" "<<j+1<<endl;
                flag++;

            }

}
}
if(flag==0){
    cout<<-1;
    return 0;
}
}



