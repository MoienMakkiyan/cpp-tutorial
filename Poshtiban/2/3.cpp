#include <iostream>
using namespace std;

  bool function(int password);
  
  int main(){
    int password, attempts=0;
    while(attempts < 3){
    cin>>password;
    if(function(password)){
      cout<<"welcome :) \n";
      return 0;
    }
    attempts++;
      cout<<"incorrect,please try again. \n Attepts remainds:"<<3 - attempts<< endl;
    
    }
    cout<<"phone is locked for an hour. \n";
    return 0;
}

  bool function(int password) {
    int originalPassword = 2255;
    if (password == originalPassword){
      return true;
    }
    else return false;
    }