// WRITE A PROGRAM TO COUNT THE TOTAL NUMBER OF DIGIT

#include <iostream>
using namespace std;

int main() {

    int num,count = 0;

    cout << "enter the number : ";
    cin >> num;

    while(num != 0) {

        num /= 10;
        count ++;
    }

    cout << "the total number of digits : " << count << endl;

    return 0;
}