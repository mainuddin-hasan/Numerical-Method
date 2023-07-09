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

int main() {
    int a[3][3], i, j;
    int det = 0;

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            cin >> a[i][j];
        }
    }
    det = a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1]) -
          a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0]) +
          a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);

    cout << "Determinant of the matrix is " << det << endl;

   return 0;
}