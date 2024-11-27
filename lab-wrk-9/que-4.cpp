// WRITE A PROGRAM TO PRING FIBONACCI SERIES UP TO N NUMBERS USING FOR LOOP

#include <iostream>
using namespace std;

int main() {

    int num, result, i,
        first = 0,
        second = 1;

    cout << "enter the number : ";
    cin >> num;

    cout << first << " " << second << " ";

    for(i = 1; i <= num; i++) {

        result = first + second;
        cout << result << " ";

        first = second;
        second = result;
    }
    
    return 0;
}