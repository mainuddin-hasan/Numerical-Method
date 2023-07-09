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
    return (x * 1.0) / (1.0 + x * x);
}

double simpson(double lower, double upper, int n) {
    double h = (upper - lower) / n;
    double sum = f(lower) + f(upper);

    for (int i = 1; i < n; i++) {
        double x = lower + i * h;
        if (i % 3 == 0) {
            sum += 2 * f(x);
        } else {
            sum += 3 * f(x);
        }
    }

    return (3 * h / 8.0) * sum;
}

int main() {
    double lower = 0.0;
    double upper = 1.0;
    int n = 6;
    double area = simpson(lower, upper, n);

    cout << "Approximate area: " << area << endl;

    return 0;
}