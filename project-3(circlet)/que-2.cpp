
// 11
// 12 13
// 14 15 16
// 17 18 19 20
// 21 22 23 24 25

#include <iostream>
using namespace std;

int main () {

    int i,j, num = 11;

    for(i = 1; i<=5; i++){
        for(j = 1; j <= i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}