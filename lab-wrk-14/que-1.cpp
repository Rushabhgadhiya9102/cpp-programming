#include <iostream>
using namespace std;

int main() {

    char passWord[100], lowerCase, upperCase, specialCase, digit;

    int length, i;

    cout << "Enter the password : ";
    cin >> passWord;

    for(length = 0; passWord[length] != '\0'; length++);
    cout << length << endl;

    for(i = 0; i < length; i++) {

        if(passWord[i] >= 'a' && passWord[i] <= 'z') {
            lowerCase = passWord[i];

        } else if(passWord[i] >= 'A' && passWord[i] <= 'Z') {
            upperCase = passWord[i];

        } else if(passWord[i] >= '0' && passWord[i] <= '9') {
            digit = passWord[i];

        } else if(passWord[i] == '@') {
            specialCase = passWord[i];
        }
    }

    if(length > 7 && lowerCase && upperCase && digit && specialCase) {
        cout << "Strong password";
    } else {
        cout << "Weak password";
    }


    return 0;
}