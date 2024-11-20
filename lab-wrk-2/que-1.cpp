// CREATE A CPP PROGRAM TO FIND THE MINIMUM NUMBER 

#include <iostream>
using namespace std;

int main (){

    int num1, num2;     // DECLARE THE VARIABLE

    cout << "enter the first number : ";        // ENTER THE FIRST NUM
    cin >> num1;

    cout << "enter the second number : ";       // ENTER THE SECOND NUM
    cin >> num2;

    if (num1 < num2 ){                      //  CONDITION WEATHER NUM1 IS MINIMUM OR NOT
        cout << num1 << " is minimum";      // MSG PRINT BASED ON CONDITION
    }else {
        cout << num2 << " is minimum";      // MSG PRINT BASED OF CONDITION
    }

    return 0;
}