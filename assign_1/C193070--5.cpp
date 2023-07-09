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

double g(double x)
{
    return sqrt((10)/(x*x*x+3));
}

void solve()
{
    double a, b, E = 0.0005;
    cin >> a;
    int step = 1;
    b = g(a);

    printf("\nStep\t\ta\t\tb\n");
    printf("====\t\t==\t\t==\n");

    while (fabs(b - a) > E)
    {
        printf("%d\t\t%lf\t%lf\n", step, a, b);
        a = b;
        b = g(a);
       
        step = step + 1;
    }
    printf("\nRoot is: %lf", b);
}
int main(){
    fastIO
    solve();
    return 0;
}
