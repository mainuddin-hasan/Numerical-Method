/// Mainuddin (C193070) Eulers method
#include<bits/stdc++.h>
using namespace std;

float func(float x, float y){
	return (pow(x, 3) + y);
}

int main(){
    float x, y, h;

    x = 0;
    y = 1;
    h = 0.01;

    y = y + (h * func(x, y));
    x = x + h;

    y = y + (h * func(x, y));
    x = x + h;

    cout << y << endl;

    return 0;
}