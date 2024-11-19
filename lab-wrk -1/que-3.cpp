// SWAP TWO VARIABLE WITHOUT USING THIRD VARIABLE

#include <iostream>
using namespace std;

int main () {

    int num1, num2;             // DECLARE THE VARIABLE

    cout << "enter the num1: ";         // ENTER THE NUMBER 1
    cin >> num1;

    cout << "enter the num2: ";         // ENTER THE NUMBER 2
    cin >> num2;

    num1 = num1 + num2;         // STORE (NUM1 + NUM2) INTO NUM1 VARIABLE
    num2 = num1 - num2;         // STORE (NUM1 - NUM2) INTO NUM2 VARIABLE 
    num1 = num1 - num2;         // STORE (NUM1 - NUM2) INTO NUM1 VARIABLE

    cout << "num1 is : " << num1 << endl;       // PRINT THE NUM1
    cout << "num2 is : " << num2 ;              // PRINT THE NUM2

}