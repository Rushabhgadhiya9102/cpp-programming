// WAP TO PRINT FACTORIAL USING TEMPLATE

#include <iostream>
using namespace std;

tempalte <typename T>
T factorial(int a){
    if(a == 0){
        return 1;
    }
    return a*factorial<int>(a-1);
}

int main () {

    int num,result;

    cout <<"Enter the number : ";
    cin >> num;

    result = factorial<int>(num);
    cout << "The factorial : " << result;

    return 0;
}