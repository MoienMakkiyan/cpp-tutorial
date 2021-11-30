#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char in = 0;
    while(true)
    {
        in = getch();
        if(in==27) break;
        switch(in)
        {
            case 'w' : cout<<"up"<<endl; break;
            case 'd' : cout<<"right"<<endl; break;
            case 's' : cout<<"down"<<endl; break;
            case 'a' : cout<<"left"<<endl; break;
            default : cout<<"invalid";
        }
    }
    return 0;
}
