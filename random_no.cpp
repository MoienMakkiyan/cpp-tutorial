#include <iostream>
#include <stdlib.h>
#include<time.h>

using namespace std;

int main(){
    srand(time(0));//starting point
    while (true)
        cout<<rand()<<endl;
    return 0;
}

