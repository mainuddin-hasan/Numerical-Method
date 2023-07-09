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
   float aa[3][3] = {{3,2,1},{1,-3,2},{2,-1,1}};
   float b[3][1] = {{3},{-3},{4}};
   float inv[3][3],a[3][3], det = 0;
   

    det = aa[0][0]*(aa[1][1]*aa[2][2] - aa[1][2]*aa[2][1]) -
          aa[0][1]*(aa[1][0]*aa[2][2] - aa[1][2]*aa[2][0]) +
          aa[0][2]*(aa[1][0]*aa[2][1] - aa[1][1]*aa[2][0]);


    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
          a[j][i] = aa[i][j];
    }

    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
          inv[i][j] = ((a[(j + 1) % 3][(i + 1) % 3] * a[(j + 2) % 3][(i + 2) % 3]) - (a[(j + 1) % 3][(i + 2) % 3] * a[(j + 2) % 3][(i + 1) % 3])) / det;
       }
   }

   
   float x[3][1];
   for(int i=0; i<3; i++){
      for(int j=0; j<1; j++){
         x[i][j] = 0;
         for(int k=0; k<3; k++){
            x[i][j] += inv[i][k] * b[k][j];
         }
      }
   }
   
   cout << "x = " << fixed << setprecision(2) << x[0][0] << ", y = " << x[1][0] << ", z = " << x[2][0] << endl;
   return 0;
}