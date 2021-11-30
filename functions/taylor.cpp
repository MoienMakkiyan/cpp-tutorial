#include <iostream>
#include <iomanip>
using namespace std;
int main(){

double n,i,fcr=1,m=0;
double x,sum,temp=1;
cin>>n;
cin>>x;
sum=0;
for(i=1;i<=n-1;i++){

temp=temp*x;
fcr=fcr*i;
sum+=(temp/fcr);

}
m=sum+1.00;
if(n==1)
    cout<<"1";
else
cout<<fixed<<setprecision(2)<<m;
return 0;
}

