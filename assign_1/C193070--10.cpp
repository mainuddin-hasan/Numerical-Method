/*
ID : C193070
Name : Mainuddin Hasan
Section : 7BM
*/
#include<bits/stdc++.h>
using namespace std;

#define E 0.0005
#define f(x) x *x *x - 6 * x + 4
const int mx = 1e6;
long double a = -10, b = 10, difX = 0.001, x1, x2, f1, f2, x0, f0, ans;

void solve()
{
    int i, j, k, n, m, c = 0, cnt = 0;
    for (i = 1; i <= mx; i++)
    {
        x1 = a;
        x2 = x1 + difX;
        f1 = f(x1);
        f2 = f(x2);
        if ((f1 * f2) > 0)
        {
            if (x2 < b)
            {
                a = x2;
            }
        }
        else
        {
        up:
            x0 = (x1 + x2) / 2.0;
            f0 = f(x0);
            if (f1 * f2 < 0)
            {
                x2 = x0;
            }
            else
            {
                x1 = x0;
                f1 = f0;
            }
            if (fabs(x2 - x1) < E)
            {
                ans = (x1 - x2) / 2.0;
                cout << ans << endl;
                if (x2 < b)
                {
                    a = x2;
                }
            }
            else
            {
                goto up;
            }
        }
    }
    cout << "Final : " << endl;
    cout << ans << endl;
}
int main()
{
    solve();
    return 0;
}