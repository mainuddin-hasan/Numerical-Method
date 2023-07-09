/// Mainuddin (C193070)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;

    float u, v, w, x, y, z, p[n], q[n];

    u = 0.0;
    v = 0.0;
    w = 0.0;
    x = 0.0;

    for(int i = 0; i < n; i++)
    {
        cin >> p[i] >> q[i];
    }

    for(int i = 0; i < n; i++)
    {
        u += p[i];
        v += q[i];
        w += (p[i] * p[i]);
        x += (p[i] * q[i]);
    }

    y = float((v * w) - (u * x)) / ((n * w) - (u * u));
    z = float((n * x) - (u * v)) / ((n * w) - (u * u));

    cout << y << endl;
    cout << z << endl;

    return 0;
}

/*

5
-2 1
1 2
0 3
1 4
2 5

*/