/*
ID : C193070
Name : Mainuddin Hasan
Section : 7BM
*/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(c) c.begin(), c.end()
#define PI 3.14159265358979323846
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

const int mx = 10;
int n, m;

ld det(int mat[10][10])
{
	int det = 0.0;
	for (int i = 0; i < 3; i++)
	{
		det = det + (mat[0][i] * (mat[1][(i + 1) % 3] * mat[2][(i + 2) % 3] - mat[1][(i + 2) % 3] * mat[2][(i + 1) % 3]));
	}

	return det;
}

int main()
{

	int i, j, k , cnt = 0;

	int A[mx][mx];
	int B[mx][mx];
	int x[mx][mx];
	int y[mx][mx];
	int z[mx][mx];

	cin >> n >> m;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> A[i][j];
			x[i][j] = A[i][j];
			y[i][j] = A[i][j];
			z[i][j] = A[i][j];

		}
		cin >> B[0][i];


	}


	ld d = det(A);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == 0)
			{
				x[i][j] = B[0][i];
			}
			if (j == 1)
			{
				y[i][j] = B[0][i];
			}
			if (j == 2)
			{
				z[i][j] = B[0][i];
			}

		}


	}
	ld dx = det(x);
	ld dy = det(y);
	ld dz = det(z);


	cout << setprecision(3) << fixed << "x : " << dx / d << endl;
	cout << setprecision(3) << fixed << "y : " << dy / d << endl;
	cout << setprecision(3) << fixed << "z : " << dz / d << endl;


	return 0;

}