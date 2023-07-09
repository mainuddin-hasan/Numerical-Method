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

double f(double x) {
    return log10(x);
}

double Trapezoidal_Rule(double lower, double upper, int n) {
    double h = (upper - lower) / n;
    double sum = f(lower) + f(upper);

    for (int i = 1; i < n; i++) {
        double x = lower + i * h;
        sum += 2 * f(x);
    }

    return (h / 2) * sum;
}

int main() {
    double lower = 1.0; // lower limit of integration
    double upper = 5.0; // upper limit of integration
    int n = 10; // number of intervals
    double area = Trapezoidal_Rule(lower, upper, n);

    cout << "Approximate area: " << area << endl;
    return 0;
}