#include <iostream>
using namespace std;

// ABSTRACT CLASSES AND PURE VIRTUAL FUNCTION

class A{

    public:
        virtual void movephone()=0;
        virtual void sidephone()=0;

        void calling(){
            cout << "Calling " << endl;
        }
};

class B : public A{

    public :
        void movephone(){
            cout <<"Movephone"<< endl;
        }
        void sidephone(){
            cout <<"Sidephone"<<endl;
        }
};

class C: public B{
    public:
        void movephone(){
            cout <<"Phone"<<endl;
        }
};

int main(){

    C a;
    a.calling();
    a.movephone();
    a.sidephone();

 

    return 0;
}