//********Bismillah-ir-Rahman-ir-Rahim***********\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

#include<bits/stdc++.h>
using namespace std;


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

const int mx = 1e6;

void solve()
{

    int a, b, k;

    while (cin >> k)
    {

        cin >> a;

        cout << "q(x): ";

        cout << a;

        b = a;

        while (cin >> a && getchar() != '\n')
        {
            b = k * b + a;
            cout << " " << b;
        }
        cout << endl;

        cout << "r = " << a + k * b << endl
             << endl;
    }
}

int main()
{

    solve();
    return 0;
}