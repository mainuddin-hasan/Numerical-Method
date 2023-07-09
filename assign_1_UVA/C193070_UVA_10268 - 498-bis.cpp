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
		string s, s1;
        ll x;
        int a;

        while (getline(cin, s1))
        {
            vector<int> co;
            x = stoi(s1);

            getline(cin, s);

            stringstream cnvt(s);

            while (cnvt >> a)
            {
                co.pb(a);
            }

            ll ans = 0;
            ll cnt = 1;
            ll jump = 1;

            for (int i = co.size() - 2; i >= 0; i--)
            {
                ans = ans + co[i] * jump * cnt;
                cnt++;
                jump = jump * x;
            }
            cout << ans << endl;

        }
        
}
int main()
{
        fastIO
        solve();
        return 0;
}
