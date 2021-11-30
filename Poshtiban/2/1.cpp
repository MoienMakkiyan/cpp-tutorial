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
    int result;
    if((a>=c && a<=b) || (a<=c && a>=b)){
      cout<<a;
    }
    if((b>=c && b<=a) || (b<=c && b>=a)){
      cout<<b;
    }
    if((c>=a && c<=b) || (c<=a && c>=b)){
      cout<<c;
    }
  }