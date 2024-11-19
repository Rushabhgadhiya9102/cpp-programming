// SWAP TWO VARIABLE USING THIRD VARIABLE 

#include <iostream>
using namespace std;

int main (){

    int num1, num2, temp;       // DECLARE THE VARIABLE

    cout << "enter the num1: ";     // ENTER THE NUMBER 1
    cin >> num1;

    cout << "enter the num2: ";     // ENTER THE NUMBER 2
    cin >> num2;

    temp = num1;        // STORE NUM1 INTO TEMP VARIABLE
    num1 = num2;        // STORE NUM2 INTO NUM1 VARIABLE
    num2 = temp;        // STORE TEMP INTO NUM2 VARIABLE

    cout << "num1 : " << num1 << endl;      // PRINT THE RESULT OF NUM1 , NUM2
    cout << "num2 : " << num2;
}