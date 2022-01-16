//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by SeyedHamid Ghasemi

#include<iostream>
#include<iomanip>>
//#include<cstdlib>
//#include<ctime>
#include<cmath>

using namespace std;

void ashpaz (int pool,char ghaza,char ashpaz1,char ashpaz2,char ashpaz3,int &nokhod,int &sibzamini,int &goosht)
{
  switch(ghaza)
    {
        case 'f':
        if(nokhod>=1)
        {
            cout<<"Food is ready";
            nokhod--;
        }
        else
        {
            cout<<"Material is not enough";
        }
        break;
        case 's':
        if(sibzamini>=1)
        {
            cout<<"Food is ready";
            sibzamini--;
        }
        else
        {
            cout<<"Material is not enough";
        }
        break;
        case 'd':
        if(goosht>=1)
        {
            cout<<"Food is ready";
            goosht--;
        }
        else
        {
            cout<<"Material is not enough";
        }
        break;
    }
}

void monshi(int pool,char ghaza,char ashpaz1,char ashpaz2,char ashpaz3,int &nokhod,int &sibzamini,int &goosht)
{
   switch(ghaza)
    {
        case 'f':
        if(ashpaz1=='p')
        {
            ashpaz( pool, ghaza,ashpaz1,ashpaz2,ashpaz3,nokhod,sibzamini,goosht);
        }
        else
        {
            cout<<"Not a chef";
        }
        break;
        case 's':
        if(ashpaz2=='p')
        {
            ashpaz( pool, ghaza,ashpaz1,ashpaz2,ashpaz3,nokhod,sibzamini,goosht);
        }
        else
        {
            cout<<"Not a chef";
        }
        break;
        case 'd':
        if(ashpaz3=='p')
        {
            ashpaz( pool, ghaza,ashpaz1,ashpaz2,ashpaz3,nokhod,sibzamini,goosht);
        }
        else
        {
            cout<<"Not a chef";
        }
        break;
    }
}

void garson(int pool,char ghaza,char ashpaz1,char ashpaz2,char ashpaz3,int &nokhod,int &sibzamini,int &goosht)
{
    switch(ghaza)
    {
        case 'f':
        if(pool>=6000)
        {
            monshi( pool, ghaza,ashpaz1,ashpaz2,ashpaz3,nokhod,sibzamini,goosht);
        }
        else
        {
            cout<<"No enough money";
        }
        break;
        case 's':
        if(pool>=18000)
        {
            monshi( pool, ghaza,ashpaz1,ashpaz2,ashpaz3,nokhod,sibzamini,goosht);
        }
        else
        {
            cout<<"No enough money";
        }
        break;
        case 'd':
        if(pool>=30000)
        {
            monshi( pool, ghaza,ashpaz1,ashpaz2,ashpaz3,nokhod,sibzamini,goosht);
        }
        else
        {
            cout<<"No enough money";
        }
        break;
    }
}



int main()
{
    int n,i;
    int pool;
    char ghaza;
    int nokhod,sibzamini,goosht;
    char ashpaz1,ashpaz2,ashpaz3;
    cin>>nokhod>>sibzamini>>goosht;
    cin>>ashpaz1>>ashpaz2>>ashpaz3;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>pool;
        cin>>ghaza;
        garson( pool, ghaza,ashpaz1,ashpaz2,ashpaz3,nokhod,sibzamini,goosht);
        cout<<endl;
    }
    return 0;
}


