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
	string s;
	cin >> s;
	int len = s.size();
	int ind = len, cnt = 0;
	for (int i = 0; i < len; i++)
	{
		if (s[i] > '0')
		{
			ind = i;
			cnt++;
			break;
		}

	}
	for (int i = ind + 1; i < len; i++) {
		if (s[i] >= '0' && s[i] <= '9')
		{
			cnt++;
		}
	}

	cout << cnt << endl;
}
int main() {
	fastIO
	solve();
	return 0;
}
