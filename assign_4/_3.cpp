/// Mainuddin (C193070)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    float u, v, w, x, loga, bloge, y, z, p[n], q[n];

    u = 0.0; //sx
    v = 0.0; //slogy
    w = 0.0; //sxs
    x = 0.0; //sx*logy

    for(int i = 0; i < n; i++)
    {
    	cin >> p[i] >> q[i];
    }

    for(int i = 0; i < n; i++)
    {
        u += p[i];
        v += log10(q[i]);
        w += (p[i] * p[i]);
        x += (p[i] * log10(q[i])); 
    }

    loga = ((v * w) - (u * x)) / ((n * w) - (u * u));
    // loga =  ((slogy * sxs) - (sx * sxintoLogy)) / ((n * sxs) - (sx * sx));
    bloge = ((n * x) - (u * v)) / ((n * w) - (u * u));
    // bloge = ((n * sxintoLogy) - (sx * slogy)) / ((n * sxs) - (sx *sx));

    y = pow(10, loga);
    z = bloge / log10(exp(1));

    cout << y << endl;
    cout << z << endl;

    return 0;
}

/*

4
2 600
10 500
26 400
61 350

*/