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
#define EPS 0.005
#define fraction()                \
	cout.unsetf(ios::floatfield); \
	cout.precision(3);            \
	cout.setf(ios::fixed, ios::floatfield);

int main()
{
	fraction();
	int n = 3, i, j, k;
	ld a[n][n], b[n], xyz[n], xyz_new[n], sum, error;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
		cin >> b[i];
	}

	for (i = 0; i < n; i++)
	{
		xyz[i] = 0.0;
	}
	for (k = 1; k <= 100; k++)
	{
		int key = 0;
		for (i = 0; i < n; i++)
		{
			sum = b[i];
			for (j = 0; j < n; j++)
			{
				if (i != j)
				{
					sum -= a[i][j] * xyz[j];
				}
			}
			xyz_new[i] = sum / a[i][i];
		}

		error = 0.0;
		for (i = 0; i < n; i++)
		{
			error += (fabs(xyz_new[i] - xyz[i])) / xyz_new[i];
			if (error < EPS)
			{
				key = 1;
			}
		}

		for (i = 0; i < n; i++)
		{
			xyz[i] = xyz_new[i];
		}


		if (key == 1)
		{
			break;
		}
	}

	for (i = 0; i < n; i++)
	{
		cout << "x" << i + 1 << " = " << xyz[i] << endl;
	}
	return 0;
}