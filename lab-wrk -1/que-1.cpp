// EVALUATE THE FORMULA (X+Y)^2 , (X-Y)^2 , (X+Y)^3 

#include <iostream>
using namespace std;

int main () {

    int x, y, result1, result2, result3;    // DECLARE THE VARIABLES

    cout << "enter the number: ";       // ENTER THE NUM1
    cin >> x ;

    cout << "enter the number: ";       // ENTER THE NUM2
    cin >> y ;

    result1 = (x+y)*(x+y);          // X+Y WHOLE SQUARE
    result2 = (x-y)*(x-y);          // X-Y WHOLE SQUARE
    result3 = (x+y)*(x+y)*(x+y);    // X+Y WHOLE CUBE

    cout << "(x + y) whole square is: " << result1 << endl;  
    cout << "(x - y) whole square is: " << result2 << endl;
    cout << "(x + y) whole cude is: " << result3 << endl;
}