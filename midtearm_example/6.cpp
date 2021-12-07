#include <iostream>

using namespace std;

int m_sum(string a);

int main()
{
    string a;
    cin>>a;

    int sum = 0;

    int i = 0;

    while(a.length()>1)
    {
        sum = m_sum(a);
        a = to_string(sum);
        i++;
    }

    cout<<i<<endl;

    return 0;
}

int m_sum(string a)
{
    int temp = 0;
    for(int i=0;i<a.length();i++)
       temp+=(a[i]-'0');
    return temp;
}
