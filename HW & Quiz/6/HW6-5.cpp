//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Ali Ekhterachian

#include <iostream>
using namespace std;

int main()
{
    int n=0,length;
    char input[10000];
    string words[100];
    cin.getline(input,10000);
    string temp=input;
    length=temp.length();
    temp="";
    for(int i=0; i<length; i++)
    {
        if(input[i]==' ')
        {
            words[n]=temp;
            temp="";
            n++;
        }
        else
        {
            temp+=input[i];
        }
    }
    words[n]=temp;
    temp="";
    n++;
    for(int i=n-1; i>-1; i--)
    {
        cout<<words[i]<<" ";
    }
    return 0;
}
