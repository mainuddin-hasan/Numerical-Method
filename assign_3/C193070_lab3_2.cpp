/*
ID : C193070
Name : Mainuddin Hasan
Section : 7BM
*/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(c) c.begin(), c.end()
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;


vector<ld> fx, fy, tmp, dfy, uv;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        fx.pb(a);
    }
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        fy.pb(a);
    }

    ld sz = fy.size();
    dfy.pb(fy[0]);
    while (sz > 1)
    {
        for (int i = 1; i < fy.size(); i++)
        {
            //cout << fy[i] - fy[i - 1] << " ";
            tmp.pb(fy[i] - fy[i - 1]);
            if (i == 1)
            {
                dfy.pb(fy[i] - fy[i - 1]);
                //cout << fy[i] - fy[i - 1] << " ";
            }
        }
        cout << endl;
        fy = tmp;
        tmp.clear();
        sz = fy.size();
    }

    ld x;
    cin >> x;
    ld h = fx[1] - fx[0];
    ld u = (x-fx[0])/h;
    ld ans=0 , first_der, second_der;
    
    ans = dfy[1] + (2*u - 1) * (dfy[2] / 2) + (3*u*u - 6*u + 2) * (dfy[3] / 6) + (4*u*u*u - 18*u*u + 22*u - 6) * (dfy[4] / 24);
    first_der = ans / h;

    ans = dfy[2] + (6 * u - 6) * (dfy[3] / 6) + (12 * u * u - 36 * u + 22) * (dfy[4] / 24);
    second_der = ans / (h*h);

    cout << "First Derivative = " << setprecision(3) << fixed << first_der << "\n";
    cout << "Second Derivative = " << setprecision(3) << fixed << second_der << "\n";

	return 0;

}