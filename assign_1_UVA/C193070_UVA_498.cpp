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
		string s1, s2;
        int a;

        while (getline(cin, s1))
        {
            vector<int> co, v;

            getline(cin, s2);

            stringstream cnvt(s1),cnvt1(s2);

            while (cnvt >> a)
            {
                co.pb(a);
            }

            while (cnvt1 >> a)
            {
                v.pb(a);
            }

            for (int j = 0; j < v.size(); j++)
            {
                int ans = 0;
                int jump = 1;
                int x = v[j];
                for (int i = co.size() - 1; i >= 0; i--)
                {
                    ans = ans + co[i] * jump;
                    jump = jump * x;
                }

                if (j == v.size() - 1)
                {
                    cout << ans;
                }
                else
                {
                    cout << ans << " ";
                }
            }
            cout << endl;
        }
        
}
int main()
{
        fastIO
        solve();
        return 0;
}
