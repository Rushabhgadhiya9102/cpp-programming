// CREATE THE PROGRAM IN CPP TO FIND THE AVERAGE OF THREE SUBJECT MATHS, ENGLISH, SCIENCE 

#include <iostream>
using namespace std;

int main (){

    float maths, english, science;      // DECLARE THE VARIABLE
    float average;

    cout << "enter maths marks : ";     // ENTER THE MATHS
    cin >> maths;

    cout << "enter english marks : ";   // ENTER THE ENGLISH
    cin >> english;

    cout << "enter science marks : ";   // ENTER THE SCIENCE
    cin >> science;

    average = ( maths + english + science)/3;      // FIND THE AVEREAGE

    cout << "average mark : " << average;       // PRINT THE AVERAGE MARKS

    return 0;
}