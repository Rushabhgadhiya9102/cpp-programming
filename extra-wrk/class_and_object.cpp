#include <iostream>
using namespace std;

class Employee {             // DECLARE THE CLASS

  private:
    int salary;             // ACCESS SPECIFIER = PUBLIC

  public:
    void setSalary(int s) {
        salary = s;
    }

    int getSalary() {
        return salary;
    }
};

int main() {

    Employee myObj;

    myObj.getSalary(50000);
    cout << myObj.getSalary();

    return 0;
}