//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Ariya Behzad

#include <iostream>
#include <math.h>

using namespace std;

int F (int);
int S (int);
int P (int);
int D (int);

int main()
{
    int n,result1,result2,result3,result4;
    cin>>n;
    result1=F(n);
    if(result1==1)
    {
        cout<<"f";
    }
      result2=S(n);
      if(result2==1)
      {
          cout<<"s";
      }
      result3=P(n);
      if(result3==1)
      {
          cout<<"p";
      }
      result4=D(n);
      if(result4==1)
      {
          cout<<"d";
      }
      cout<<".";

    return 0;
}
int F (int x)
{
  int a=1,b=1,c;
  while(b<=x)
  {
      c=a+b;
      a=b;
      b=c;
  }
      if(x==a)
      {
          return 1;
      }
      else
      {
          return 0;
                }
  }

int S (int x)
{
    int i;
    for(i=1;i<=x;i++)
    {
        if(i*i==x)
        {
            return 1;
        }
    }

        return 0;


}
int P (int x)
{
  int c=0;
  for(int i=1;i<=x;i++)
  {
      if(x%i==0)
      {
          c+=1 ;
      }
  }
  if(c==2)
  {
      return 1;
  }
  else
  {
      return 0;
  }
}
int D (int x)
{
    int c=1;
    for(int i=1;i<=x;i++)
        if(x%i==0)
    {
        c++;
    }
    if(c>=15)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
