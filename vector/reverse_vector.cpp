#include <iostream>
#include <vector>
using namespace std;

int main(){

    // ORIGINAL VECTOR 

    vector<int> v={23,13,34,43,56};
    int n= v.size();
    vector <int> vr(5);
    cout << "Original Vector is : " << endl;

    for(int i=0; i<=n-1; i++){
        cout << v[i] << "  ";
    }
    cout << endl;

    // REVERSING OF VECTOR

    cout << "reverse vector is : " << endl;

    for(int i=0;i<v.size();i++){
        n--;
        vr[i] = v[n];
        cout << vr[i] << "  ";
    }
    cout << endl;

    return 0;
}