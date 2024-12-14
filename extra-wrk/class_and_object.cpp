#include <iostream>
using namespace std;

class Employee {             // DECLARE THE CLASS

  private:
    int salary;             // ACCESS SPECIFIER = PUBLIC

  public:
    void setSalary(int s) {
        salary = s;
    }


 public:
    void getSalary() {

      cout << salary;
       
    }
};

int main() {

    Employee myObj;

    myObj.getSalary(50000);
   

    return 0;
}