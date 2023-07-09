/*
ID : C193070
Name : Mainuddin Hasan
Section : 7BM
*/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(c) c.begin(), c.end()
#define PI 3.14159265358979323846
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

double f(double x) {
    return exp(sin(x));
}

double simpson_rule(double lower, double upper, int n) {
    double h = (upper - lower) / n;
    double sum = 0.0;

    for (int i = 0; i <= n; i++) {
        double x = lower + i * h;

        if (i == 0 || i == n) {
            sum += f(x);
        } else if (i % 2 == 1) {
            sum += 4 * f(x);
        } else {
            sum += 2 * f(x);
        }
    }

    return (h / 3.0) * sum;
}

int main() {
    double lower = 0.0; 
    double upper = PI/2; 
    int n = 6; // number of intervals
    double area = simpson_rule(lower, upper, n);

    cout << "Approximate area: " << area << endl;

    return 0;
}