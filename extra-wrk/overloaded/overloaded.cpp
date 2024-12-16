#include <iostream>
using namespace std;

// ------------------- USER DEFINE OVERLOADED FUNCTION ----------------------

// DEFAULT FUNCTION
void pizza(){
    cout << "here the pizza";
}

// PARAMETERIZED FUNCTION

void pizza(string topping1){
    cout << "here is your " << topping1 << " pizza!";
}

// INLINE FUNCTION

void pizza(string topping1, string topping2){
    cout << "here is your " << topping1 << " and " << topping2 << " pizza!";
}

// ------------------- USER DEFINE OVERLOADED FUNCTION ----------------------

// MAIN FUNCTION

int main(){

    pizza("pepperoni, mushroom");

    return 0;
}