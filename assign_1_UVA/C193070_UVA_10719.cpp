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
#define EPS 1e-8
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

//#define fraction() cout.unsetf(ios::floatfield); cout.precision(4); cout.setf(ios::fixed,ios::floatfield);




void solve()
{
    int a, b, k;

    while (cin >> k)
    {

        cin >> a;

        cout << "q(x): ";

        cout << a; // b = 0 hole b = a+(k*0) = a

        b = a;

        while (cin >> a && getchar() != '\n')
        {
            b = k * b + a;
            cout << " " << b;
        }
        cout << endl;

        cout << "r = " << a + k * b << endl << endl;
    }
}
int main()
{

        solve();
        return 0;
}


/*
	an = bn-1
 	an-1 = bn-2 – xr bn-1  
	. . .
	. . .
	a1 = b0 – xr b1 
	a0 = - xr b0 

    That is  ai = bi-1 – xr bi 

    Then equation is 	bi-1 = ai  + xr bi	

*/

