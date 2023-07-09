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

#define f(x) (x*x*x)-(9*x)+1

void solve()
{
    float a, b , c, fa, fb, fc, E = 0.0005;
    cin >> a >> b;
    int step = 1;
    fa = f(a);
    fb = f(b);
    printf("\nStep\t\ta\t\tb\t\tc\t\tf(c)\n");
    printf("====\t\t==\t\t==\t\t==\t\t====\n");
    while ( fabs(b-a) >= E)
    {
        c = (a + b) / 2;
        fc = f(c);
        printf("%d\t\t%f\t%f\t%f\t%f\n", step, a, b, c, fc);
        if (fa * fc < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
        step = step + 1;
    } 
    printf("\nRoot is: %f", c);
}
int main(){
fastIO
solve();
return 0;
}
