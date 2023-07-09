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
     vector<int> y, tmp;
     for(int i = 0; i < n; i++)
     {
        int x;
        cin >> x;
        y.pb(x);
     }
     int sz = y.size();
     while(sz>1)
     {
        for(int i = 1; i < y.size(); i++)
        {
            cout << y[i]-y[i-1] << " ";
            tmp.pb(y[i]-y[i-1]);
        }
        cout << endl;
        y = tmp;
        tmp.clear();
        sz = y.size();
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
1 8 27 64 125

Output :
7 19 37 61 
12 18 24 
6 6 
0

*/
