#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void bede_baghali(int a[8])
{
	for(int i = 0; i < 8; i++)
		if(a[i] > 6)
		{
			if(a[i] % 6 == 0)
				a[i + 1] += a[i] / 6 - 1;
			else
				a[i + 1] += a[i] / 6;
			a[i] %= 6;
			if(a[i] == 0)
				a[i] = 6;
		}
}

int main()
{
	int n, m, a[8];
	cin >> n >> m;
	for(int i = 0; i < 8; i++)
	{
		a[i] = 1;
	}
	for(int i = 2; i <= m; i++)
	{
		a[0]++;
		bede_baghali(a);
	}
	for(int i = n - 1; i >= 0; i--)
		cout << a[i];
	return 0;
}

