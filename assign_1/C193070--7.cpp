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
    return (x * x * x)  - x  + 2;
}


void solve()
{
    double a, b, c, E = 0.0005;
    cin >> a >> b;
    int step = 1;


    printf("\nStep\t\ta\t\tb\n");
    printf("====\t\t==\t\t==\n");

    while (1)
    {
        c = a -( ( fx(a) * (b - a) ) / ( fx(b) - fx(a) ) );

        printf("%d\t\t%lf\t%lf\n", step, a, b);

        if( fabs(b - a) < E)
        {
            break;
        }
        else if(fx(a)*fx(c) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
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
