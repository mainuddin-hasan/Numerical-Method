/*
ID : C193070
Name : Mainuddin Hasan
Section : 7BM
*/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second

#define all(c) c.begin(), c.end()
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

const int mx = 100;
vector<ld> fx, fy, tmp, dfy, uv;
int fac[mx];

unsigned int factorial(unsigned int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

void solve()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        fx.pb(a);
    }
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        fy.pb(a);
    }

    ld sz = fy.size();
    dfy.pb(fy[0]);
    while (sz > 1)
    {
        for (int i = 1; i < fy.size(); i++)
        {
            // cout << fy[i] - fy[i - 1] << " ";
            tmp.pb(fy[i] - fy[i - 1]);
            if (i == 1)
            {
                dfy.pb(fy[i] - fy[i - 1]);
                // cout << fy[i] - fy[i - 1] << " ";
            }
        }
        cout << endl;
        fy = tmp;
        tmp.clear();
        sz = fy.size();
    }

    ld x;
    cin >> x;
    ld h = fx[1] - fx[0];
    ld u = (x - fx[0]) / h;

    for (int i = 1; i < n; i++)
    {
        ld mult = u;
        for (int j = 1; j < i; j++)
        {
            mult = mult * (u - j);
        }
        uv.pb(mult);
    }

    ld sumy = dfy[0];

    for (int i = 1; i < n; i++)
    {
        sumy = sumy + (uv[i - 1] * dfy[i]) / factorial(i);
    }
    cout << setprecision(5) << fixed;
    cout << sumy << endl;
}
int main()
{
    fastIO
    solve();
    return 0;
}

/*

input :
5
1 2 3 4 5
1 8 27 64 125
1.7

Output :
4.91300

*/