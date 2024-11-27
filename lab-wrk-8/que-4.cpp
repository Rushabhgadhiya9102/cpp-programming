// WRITE A PROGRAM TO PRINT ODD NUMBER N TO 1 USING WHILE LOOP

#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "enter the number : ";
    cin >> num;

    while(num >= 1) {

        if(num % 2 != 0) {

            cout << num << " ";

        }
        num--;
    }

        return 0;
}

    