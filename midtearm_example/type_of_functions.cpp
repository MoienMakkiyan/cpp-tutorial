#include <iostream>

using namespace std;

double a(int n, double m);
bool isEven(int n);
void print();
void multiply2(int &n);
int m_multiply2(int k);

int main()
{
    //cout<<a(5,0.3)<<endl;
    //cout<<isEven(12)<<endl;
    //cout<<isEven(3)<<endl;
    //print();

    int n = 2;
    //multiply2(n);
    n=m_multiply2(n);
    cout<<n<<endl;

    return 0;
}

//int for return integer
//double for return double number
//float for return float number
//bool for return boolean expersion
//void for do a specefic function

double a(int n, double m)
{
    double k = (double)n*m;
    return k;
}

bool isEven(int n)
{
    if(n%2==0) return true;
    else return false;
}

void print()
{
    cout<<"print function (void) runned!"<<endl;
}

void multiply2(int &k)
{
    k*=2;
}

int m_multiply2(int k)
{
    k*=2;
    return k;
}
