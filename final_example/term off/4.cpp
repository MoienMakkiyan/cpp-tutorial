#include <iostream>

using namespace std;

void hanoi(int n, string src, string help, string dest);

int main()
{
    int n;
    cin>>n;
    string src,help,dest,x;
    getline(cin>>ws,src);
    getline(cin,help);
    getline(cin,dest);
    hanoi(n,src,help,dest);
    return 0;
}

void hanoi(int n, string src, string help, string dest){

    if(n==1)
    {
        cout<<"move disk 1 from "<<src<<" to "<<dest<<endl;
    }
    else if(n>1)
    {
        hanoi(n-1,src,dest,help);
        cout<<"move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
        hanoi(n-1,help,src,dest);
    }
}
