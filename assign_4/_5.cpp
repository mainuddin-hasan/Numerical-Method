//5 RK method

#include<bits/stdc++.h>
using namespace std;

double func(double x, double y){
	return (x + y);
}

int main(){
    float x, y, h, _xn, a, b, c, d;

    x = 0;
    y = 1;
    h = 0.1;

    a = func(x, y);
    b = func(x + (h / 2), y + ((a * h) / 2));
    c = func(x + (h / 2), y + ((b * h) / 2));
    d = func(x + h, c * h);

    y += ((a + 2 * b + 2 * c + d) * (h / 6));
    x += h;

    cout << y << endl;

    a = func(x, y);
    b = func(x + (h / 2), y + ((a * h) / 2));
    c = func(x + (h / 2), y + ((b * h) / 2));
    d = func(x + h, c * h);

    y += ((a + 2 * b + 2 * c + d) * (h / 6));
    x += h;

    cout << y << endl;

    return 0;
}