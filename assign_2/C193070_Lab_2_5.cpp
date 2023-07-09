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
#define testcase     \
    {                \
        ll t;        \
        cin >> t;    \
        while (t--)  \
        {            \
            solve(); \
        }            \
    }
#define all(c) c.begin(), c.end()
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;


const int mx = 100;
vector<ld> fx, fy, tmp, dfy;
ld uv[mx];

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
    int fgap = 0;
    int rgap = 0;
    dfy.pb(fy[0]);
    while (sz > 1)
    {
        for (int i = 1; i < fy.size(); i++)
        {
            ld cdy = (fy[i] - fy[i - 1]) / (fx[i + fgap] - fx[i + fgap - rgap-1]);
            cout << cdy << " ";
            tmp.pb(cdy);
            if (i == 1)
            {
                dfy.pb(cdy);
            }
        }
        fgap++;
        rgap++;
        cout << endl;
        fy = tmp;
        tmp.clear();
        sz = fy.size();
    }

    ld X;
    cin >> X;

    for (int i = 1; i < n; i++)
    {
        ld mult = 1;
        for (int j = 0; j < i; j++)
        {
            mult = mult * (X - fx[j]);
        }
        uv[i]=mult;;
    }


    ld sum = dfy[0];

    for (int i = 1; i < n; i++)
    {
        sum = sum + (uv[i] * dfy[i]);
    }
    cout << endl;
    cout << sum << endl;
}
int main()
{
    fastIO
    solve();
    return 0;
}

/*
Input :
5
1 3 4 6 10
0 18 58 190 920
2.7

Output :
9.00000 40.00000 66.00000 182.50000 
10.33333 8.66667 19.41667 
-0.33333 1.53571 
0.20767 


9.35463

*/