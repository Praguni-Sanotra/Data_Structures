//COPY CONSTRUCTOR
//-- Copy constructor is a special type of construct that initialises or creates a new object as a copy of an existing object.
// 1.  Default Copy constructor: 
// --It is an automatically provided constructor by the c++ compiler.
// 2. Custom Copy constructor
// -- It is a user-defined constructor that allows us to define how an object should be copied.

#include<iostream>

using namespace std;

class Data{
    public:
        string name;
        int age;

        Data(string name, int age) {
            this -> name = name;
            this -> age = age;
        }

        void printDetails(void){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main(){
    Data M1("Praguni", 20);
    M1.printDetails();

    Data M2(M1);  //Default copy constructor
    M2.printDetails();
    return 0;
}

