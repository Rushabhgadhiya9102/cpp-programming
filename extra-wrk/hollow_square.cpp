#include <iostream>
using namespace std;

int main() {

    int i, j, n=1;

    for(i = 0 ; i < 5; i++) {

        for(j = 0; j < 5; j++) {

            if(i == 0 || i == 4 || j == 0 || j == 4) {
                cout << n << " ";
                n++;
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}