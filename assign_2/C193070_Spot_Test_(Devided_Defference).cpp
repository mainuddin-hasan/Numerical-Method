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
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(5);            \
    cout.setf(ios::fixed, ios::floatfield);

const int mx = 100;
vector<ld> fx, fy, tmp, dfy;
ld uv[mx];

void solve()
{
    fraction();
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
    for(int i = 0; i < n; i++)
    {
        cout << fy[i] << " ";
    }
    cout << endl;


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
5 7 11 13 21
150 392 1452 2366 9702

Output :
150.00000 392.00000 1452.00000 2366.00000 9702.00000 
121.00000 265.00000 457.00000 917.00000 
24.00000 32.00000 46.00000 
1.00000 1.00000 
0.00000

*/