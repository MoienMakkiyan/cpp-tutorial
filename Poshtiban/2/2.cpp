#include <iostream>
using namespace std;

  void function(int a , int b, int c);
  
  int main(){
  int a,b,c;
  cin>> a>>b>>c;
  function(a,b,c);
  return 0;
}

  void function(int a , int b, int c) {
    int temp = a;
    a=b;
    b=c;
    c=temp;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    }