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

const int mx = 1e6;
int a[mx];
string s;

void go(int j)
{
	for (int i = j; i >= 0; i--)
	{
		if (s[i] >= '0' && s[i] <= '8')
		{
			s[i]++;
			break;
		}
		else
		{
			if (s[i] != '.')
			{
				s[i] = '0';
			}
		}



	}
}





void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0, num;

	cin >> s;
	cin >> num;//digit;
	int len = s.size();
	c = 0;
	for (i = 0; i < len; i++)
	{
		if (cnt == num)
		{
			int tmp1 = s[i - 1] - '0'; //ager index
			int tmp2 = s[i] - '0'; //bortoman index

			if (tmp2 < 5)
			{

			}
			else if (tmp2 == 5)
			{
				if (tmp1 % 2 == 0)
				{

				}
				else
				{
					go(i - 1);
				}

			}
			else
			{
				go(i - 1);
			}

			break;


		}
		else if (c == 0 && s[i] >= '1' && s[i] <= '9')
		{
			c = 1;
			cnt++;
		}
		else if (c == 1 && s[i] >= '0' && s[i] <= '9')
		{

			cnt++;
		}




	}

	cnt = 0;
	c = 0;
	for (i = 0; i < len; i++)
	{
		if (cnt == num)
			break;
		else if (c == 0 && s[i] >= '1' && s[i] <= '9')
		{
			c = 1;
			cout << s[i];
			cnt++;
		}
		else if (c == 1 && s[i] >= '0' && s[i] <= '9')
		{
			cout << s[i];
			cnt++;
		}
		else
		{
			cout << s[i];
		}

	}
	cout << endl;


}
int main(){
    fastIO
    solve();
    return 0;
}
