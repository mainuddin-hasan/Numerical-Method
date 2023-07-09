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
    int x = 2, n = 3, a[100] = {1, -5, 10, -8};
    cout << "x : " << x << endl;
    cout << "n : " << n << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << "a" << i << " : " << a[i] << endl;
    }
    cout << "===================" << endl;
    int b;
    b = 0;

    for (int i = 0; i < n; i++)
    {
        b = a[i] + b * x;
        cout << "b" << i << " : " << b << endl;
    }
    cout << "b" << n << " : " << 0 << endl;
}
int main(){
fastIO
solve();
return 0;
}
