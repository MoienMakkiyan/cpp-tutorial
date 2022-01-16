#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int summer(int j, int i, int n, bool b[500][500], int &cnt)
{
	if(j < 0 || i < 0 || j > n - 1 || i > n - 1)
		return 0;
	else
	{
		int s = b[i][j];
		cnt++;
		return s;
	}
}

bool situation(bool b[500][500], int i, int j, int n)
{
	int cnt = 0, sum = 0, k;
	sum += summer(j + 1, i, n, b, cnt) + summer(j, i + 1, n, b, cnt) + summer(j - 1, i, n, b, cnt) + summer(j, i - 1, n, b, cnt) + summer(j + 1, i - 1, n, b, cnt) + summer(j - 1, i + 1, n, b, cnt) + summer(j + 1, i + 1, n, b, cnt) + summer(j - 1, i - 1, n, b, cnt) ;
	if(cnt % 2 == 0)
	{
		if(sum == cnt/2)
			return b[i][j];
		else if(sum > cnt/2)
			return 1;
		else
			return 0;
	}
	else
	{
		if(sum > cnt/2)
			return 1;
		else
			return 0;
	}
}	

void get_situation(bool b[500][500], int k, int n, bool bp[500][500])
{
	while(k > 0)
	{
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				bp[i][j] = situation(b, i, j, n);
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				b[i][j] = bp[i][j];
		k--;
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			cout << b[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	int n ,k;
	bool b[500][500], bp[500][500];
	cin >> n >> k;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> b[i][j];
	get_situation(b, k, n, bp);
	return 0;
}

