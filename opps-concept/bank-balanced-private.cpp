// BANK BALANCED USING SETTER AND GETTER

#include <iostream>
using namespace std;

class BANK {

  private:
    int balanced = 5000000;

  public:
    void getBalanced(int account) {
        if(account == 9102) {
            cout << "Your balanced : " << balanced;
        } else {
            cout << "wrong password";
        }
    }
};

int main() {

    BANK b1;

    int pass;
    cout << "enter the password : " ;
    cin >> pass;

    b1.getBalanced(pass);

    return 0;
}