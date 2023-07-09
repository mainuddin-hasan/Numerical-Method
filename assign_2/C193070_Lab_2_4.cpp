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
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

void solve()
{

    int n;
    cin >> n;
    vector<ld> x(n), y(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
     }
     for(int i = 0; i < n; i++)
     {
        cin >> y[i];
     }
     ld Yval;
     cin >> Yval;

     ld ans = 0;
     for(int i = 0; i < n; i++)
     {
        ld xc = x[i];
        ld yc = 1.0;

        for(int j = 0; j < n; j++)
        {
            if( i != j )
            {
                xc = xc * (Yval - y[j]);
                yc = yc * (y[i] - y[j]);
            }
        }
        ans = ans + (xc / yc);

     }
     cout << setprecision(5) << fixed;
     cout << ans << endl;



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
1 2 3 4 5
1 8 27 64 125
85

Output :
5.64691

*/