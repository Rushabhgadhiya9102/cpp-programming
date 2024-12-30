// VECTOR MATRIX 

#include <iostream>
#include <vector>
using namespace std;

int main (){

    int n;
    cout << "Enter value of n : ";
    cin >> n;

    vector<int> v1(n,n);
    vector<vector<int>> v2(n,v1);

    for(vector<int> element:v2){
        for(int e:element){
            cout << e << " ";
        }
        cout << endl;
    } 

    return 0;
}