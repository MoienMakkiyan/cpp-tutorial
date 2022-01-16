#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
	int a[500][500];
	int m,n;
	cin >> m >> n;
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			cin >> a[i][j];
	for(int j = 0; j < n; j++)
	{
		for(int i = 0; i < m; i++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}

