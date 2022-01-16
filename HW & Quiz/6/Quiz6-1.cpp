//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Nika Zahedi

#include<iostream>
#include<string>

using namespace std;

void generateIP(string IP,int a[]);
int toStr(string s)
{
    int num=0, L=s.length();
    for (int i=0;i<L;i++)
    {
        num*=10;
        num+=s[i]-'0';
    }
    return num;
}

int main()
{
    string IP; cin>>IP;
    int L=IP.length();
    int a[4];

    for (a[0]=1;a[0]<=3;a[0]++)
    {
        for (a[1]=1;a[1]<=3;a[1]++)
        {
            for (a[2]=1;a[2]<=3;a[2]++)
            {
                a[3]=L-a[0]-a[1]-a[2];
                if (a[3]<=3 &&a[3]>0)
                    generateIP(IP,a);
            }
        }
    }

    return 0;
}

void generateIP(string IP,int a[])
{
    int sum=0;
    string result="";
    for (int i=0;i<4;i++)
    {
        string sub=IP.substr(sum,a[i]);

        if (a[i]==3)
            if (toStr(sub)>=255)
                return;
        if (a[i]!=1&& sub[0]=='0')
            return;

        result+=sub;

        sum+=a[i];
        if (i!=3)
            result+=".";
    }
    cout<<result<<endl;
}
