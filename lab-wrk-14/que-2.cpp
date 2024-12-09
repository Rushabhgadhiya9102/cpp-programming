#include <iostream>
#include <string.h>
using namespace std;

int main(){

    char email[100] = "rushabh77@gmail.com",  
         passWord[50] = "rushabh_123";
         pass[50], 
         user[100];

    cout << "enter the user: ";
    cin >> user;

    cout << "enter the password: ";
    cin >> pass;

    if(strcmp(email,user) == strcmp(passWord,pass)){
            cout << "welcome user";
    }   else{
        cout << "invalid";
    }

    return 0;
}