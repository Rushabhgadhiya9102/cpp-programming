#include <iostream>
using namespace std;

//SINGLE INHERITANCE

class animal{
    public:
        void Eat(){
            cout << "Tiger is eating" << endl;
        }
};

class tiger : public Animal{
    public:
        void Sleep(){

            cout << "Tiger is sleeping " << endl;
        }
};

// MULTI - LEVEL INHERITANCE

class Animal{
     public:
        void Eat(){
            cout << "Animal is eating " << endl;
        } 
};

class Dog:public Animal {
    public: 
        void Sleep(){
            cout << "Dog is sleeping" << endl;
        }
};

class Pitbull : public Dog{
    public:
        void Bark(){
            cout << "Pitbull is barking" << endl;
        }
};

// MULTIPLE INHERITANCE

 class Engine{
    public:
    string Engine_name = "VB";
 };

 class Wheel{
    public:
    string Wheel_name = "MRF";
 };

 class Car : public Engine, public Wheel{
    public:
     void Make(){
        cout << "A new car is prepare with engine" << Engine_name << endl
             << "Wheel is of " << Wheel_name << endl;
     }
 };

// HIERARCHICAL INHERITANCE

class Animal{
    public:
        void Eat () {
            cout << "Tiger is eating" << endl;
        }
};

class Tiger: public Animal {
    public:
        void Sleep(){
            cout << "Tiger is sleeping" << endl;
        }
};

class Lion:public Animal {
    public:
        void Sleep(){
            cout << "Lion is sleeping " << endl;
        }
};

// HYBRID INHERITANCE

class A{
    public:
        void Tiger(){
            cout << "Tiger is eating" << endl;
        }
};
class b : public A{
    public:
        void Lion(){
            cout << "Lion is eating" << endl;
        }
};
class c : public A{
    public:
        void Cheetah(){
            cout << "Cheetah is eating" << endl;
        }
};

class D : public B, public C{

    public : 
        void Leopard(){
            cout << "Leopard is eating" << endl;
        }
};


int main(){

    // SINGLE INHERITANCE

        Tiger T;
        T.Eat();
        T.Sleep();

    // MULTI-LEVEL INHERITANCE

        Pitbull A;
        A.eat();
        A.Sleep();
        A.Bark();

    // MULTIPLE INHERITANCE    

        Car A;
        A.Make();

    // HIERARCHICAL INHERITANCE

        Lion C;
        Tiger T;

        T.Eat();
        C.Eat();

        C.Sleep();
        T.Sleep();

    // HYBRID INHERITANCE

        D a;

        a.C::Tiger();        
        a.B::Tiger();        
        a.Cheetah();
        a.Lion();

    return 0;
}