#include <iostream>
using namespace std;

int main(){

    char email[100] = "rushabhgadhiya77@gmail.com",
         passWord[50] = "rushabh_123",
         userId[100],
         pass[50];

    cout << "Enter the userId : ";
    cin >> userId;

    cout << "Enter the password : ";
    cin >> pass;

    if ( userId == email && pass == passWord){
        cout << "Welcome user";
    }else{
        cout << "invalid userId and password";
    }

    return 0;
}