#include <iostream>
using namespace std;

int main (){

    char string[1000];
    int i;

    cout << "Enter the string : ";
    cin >> string;

   for(i=0; string[i]!='\0';i++){

    if(string[i]>='a' && string[i]<='z'){
        string[i] -= 32;
    }
   }

   cout << "upper case : " << string;

    return 0;
}