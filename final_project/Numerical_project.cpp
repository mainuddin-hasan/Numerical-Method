#include <iostream>
#include <cmath>

// Define the force function F(x) = 3x^2 - 2x + 1
double forceFunction(double x) {
    return 3 * pow(x, 2) - 2 * x + 1;
}

int main() {
    double a = 0; // Lower limit of integration
    double b = 5; // Upper limit of integration
    int n = 3;    // Number of subintervals (a multiple of 3)

    double h = (b - a) / n; // Width of each subinterval

    // Calculate the approximate work using Simpson's 3/8 rule
    double approximateWork = 0;

    for (int i = 0; i <= n; i++) {
        double xi = a + i * h;

        if (i == 0 || i == n) {
            approximateWork += forceFunction(xi);
        } else if (i % 3 == 0) {
            approximateWork += 2 * forceFunction(xi);
        } else {
            approximateWork += 3 * forceFunction(xi);
        }
    }

    approximateWork = (3 * h / 8) * approximateWork;

    // Output the result
    std::cout << "Approximate work: " << approximateWork << " Joules" << std::endl;

    return 0;
}
