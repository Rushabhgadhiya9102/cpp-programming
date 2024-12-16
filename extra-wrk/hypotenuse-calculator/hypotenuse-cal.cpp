#include <iostream>
#include <math.h>
using namespace std;

int main(){

    double a, b, c;

    cout << "enter side A : ";
    cin >> a;

    cout << "enter side B : ";
    cin >> b;

    a = pow(a,2);
    b = pow(b,2);
    c = sqrt(a + b);

    cout << "side C : " << c;

    return 0;
}