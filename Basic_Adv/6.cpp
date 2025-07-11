//WAP to print student detail roll and cgpa. 
//Note: initialise roll and cgpa using contructor ad print this detail via display function 
// roll and cgpa must be data member of class 

#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float cgpa;
public:
    Student(int r, float c) {
        roll = r;
        cgpa = c;
    }
    void display() {
        cout << "Roll Number: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s1(101, 8.75);
    s1.display();

    return 0;
}
