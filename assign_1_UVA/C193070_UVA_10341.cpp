/*
ID : C193070
Name : Mainuddin Hasan
Section : 7BM
*/
#include <bits/stdc++.h>
using namespace std;
#define pb             push_back
#define ff             first
#define ss             second
#define testcase       {ll t;cin>>t;while(t--){solve();}}
#define all(c)         c.begin(), c.end()
#define fastIO ios::sync_with_stdio(0); cin.tie(0); 
#define EPS 1e-8
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define fraction() cout.unsetf(ios::floatfield); cout.precision(4); cout.setf(ios::fixed,ios::floatfield);

ld p, q, r, s, t, u;

ld f(ld x)
{
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

ld bisection(ld l, ld r)
{
    fraction();
    ld mid = l;

    while ((r - l) > EPS)
    {
        mid = (l + r) / 2;

        if (f(mid) * f(l) <= 0)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }

    return l;
}

void solve()
{
    while (cin >> p >> q >> r >> s >> t >> u)
    {

        ld l = 0;
        ld r = 1;

        if (f(0) * f(1) > 0)
        {
            cout << "No solution" << endl;
        }
        else
        {
            cout << bisection(l, r) << endl;
        }
    }
}
int main()
{
        fastIO
        solve();
        return 0;
}
