// CREATE A PROGRAM TO CHECK WEATHER THE NUMBER IS POSITIVE, NEGATIVE OR NEUTRAL

#include <iostream>
using namespace std;

int main (){

    int num1;       // DECLARE THE VARIABLE

    cout << "enter the number : ";         // ENTER THE NUMBER
    cin >> num1;

    if(num1<0){         // CONDITION NUM1 IS LESS THAN 0

        cout << num1 << " is negative";

    } else if(num1 == 0){       // CONDITION NUM1 IS EQUAL TO 0

        cout << num1 << " is netural";

    }else if(num1 > 0){         // CONDITION NUM IS GREATER THAN 0

        cout << num1 << " is positive";

    }

    return 0;
}
