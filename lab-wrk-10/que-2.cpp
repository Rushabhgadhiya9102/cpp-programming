// WRITE A PROGRAM TO PRINT A FACTORIAL OF NUMBER N USING FOR LOOP

#include <iostream>
using namespace std;

int main (){

     int i, num, factorial = 1;

    cout << "enter the number : ";
    cin >> num;

    for(i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "the factorial of all numbers is: " << factorial;

    return 0;
}