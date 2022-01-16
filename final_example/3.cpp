#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
	bool b[500][500];
	int m, n, max, rows[500], columns[500];
	long long sum = 0;
	cin >> m >> n;
	if(m > n)
		max = m;
	else
		max = n;
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
		{
			cin >> b[i][j];
			if(b[i][j])
			{
				rows[i]++;
				columns[j]++;
			}
				
		}
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			if(b[i][j])
			{
				sum += (rows[i] - 1) * (columns[j] - 1);
			}
	cout << sum;	
	return 0;
}

