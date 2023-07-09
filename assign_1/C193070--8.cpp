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

double fx(double x)
{
    return  (x * x * x)  - (5 * x * x) - 29; //(x*x)-(4*x)-10;
}


void solve()
{
    double a, b, c, f1, f2, E = 0.0005;
    cin >> a >> b;
    int step = 1;

    printf("\nStep\t\ta\t\tb\n");
    printf("====\t\t==\t\t==\n");

    while (1)
    {
        f1 = fx(a);
        f2 = fx(b);
        c = ( (f2 * a) - (f1 * b) ) / (f2 - f1);

        printf("%d\t\t%lf\t%lf\n", step, a, b);

        if( fabs(c - b) < E )
        {
            break;
        }
        else
        {
			a = b;
			f1 = f2;
			b = c;
			f2 = fx(c);
        }
        step = step + 1;
    }
    printf("\nRoot is: %lf", c);
}
int main(){
fastIO
solve();
return 0;
}
