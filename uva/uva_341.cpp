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
#define EPS 1e-8


ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

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

    Alhamdulillah;
    solve();
    return 0;
}