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

void solve()
{
    int x = 5, n = 3, a[100] = {10, 5, -2, 1};
    cout << "Given x : " << x << endl;
    cout << "Max power n : " << n << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << "The coeffiecient a" << i << " : " << a[i] << endl;
    }
    cout << "===================" << endl;
    cout << "Roots are :" << endl;
    int p;
    p = a[n];
    cout << "p" << n << " : " << p << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        p = p * x + a[i];
        cout << "p" << i << " : " << p << endl;
    }
}
int main()
{
    fastIO
    solve();
    return 0;
}
