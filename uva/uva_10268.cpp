//********Bismillah-ir-Rahman-ir-Rahim***********\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pll pair<ll,ll>
#define vp vector<pair<ll,ll>>
#define pb push_back
#define ff first
#define ss second
#define pi acos(-1.0)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define EPS 1e-9

ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

void solve()
{

    int i, j, k, n, m, x, y, z, c = 0, cnt = 0, a;
    string s;
    stringstream ss;

    while (getline(cin, s))
    {

        x = stoi(s);

        vi v;

        getline(cin, s);

        ss.clear();

        ss.str("");

        ss << s;
        ;

        while (ss >> a)
        {
            v.pb(a);
        }

        int ans = 0;
        cnt = 1;
        int jump = 1; // x

        for (i = v.size() - 2; i >= 0; i--)
        {
            ans = ans + v[i] * jump * cnt;
            cnt++;
            jump = jump * x;
        }

        cout << ans << endl;
    }
}

int main()
{

    solve();
    return 0;
}