// SCOPE OF VARIABLE

#include <iostream>
using namespace std;

int global = 100;

int main (){

    int local = 500;

    cout << "Global Variable : " << ::global << endl
         << "Local Variable : " << local;

    return 0;     
}