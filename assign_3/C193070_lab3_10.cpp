/*
ID : C193070
Name : Mainuddin Hasan
Section : 7BM
*/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(c) c.begin(), c.end()
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;


int main()
{
	int i, j, k , n, m, c = 0, cnt = 0;

	cin >> n;
	m = n + 1;
	ld a[n + 10][m + 10];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			ld x = a[j][i] / a[i][i];
			for (k = i; k <= n; k++)
			{
				a[j][k] = a[j][k] - x * a[i][k];
			}
		}
	}

	for (i = n - 1; i >= 0; i--)
	{
		for (j = i - 1; j >= 0; j--)
		{
			ld x = a[j][i] / a[i][i];

			for (k = i; k <= n; k++)
			{
				a[j][k] = a[j][k] - x * a[i][k];
			}
		}
	}


	for (i = 0; i < n; i++)
	{
		ld x = a[i][i];

		for (j = i; j <= n; j++)
		{
			a[i][j] = a[i][j] / x;

		}
	}


	for (i = 0; i < n; i++)
	{
		cout << a[i][n] << endl;
	}

	return 0;

}