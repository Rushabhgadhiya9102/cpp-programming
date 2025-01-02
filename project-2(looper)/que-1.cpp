// WRITE A PROGRAM TO PRINT ALPHABET WHICH SKIP 3 NUMBER

#include <iostream>
using namespace std;

int main() {

    char alpha = 'a';

    while(alpha <= 'z'){
        cout << alpha << " " ;
        alpha += 4;
    }

    return 0;
}