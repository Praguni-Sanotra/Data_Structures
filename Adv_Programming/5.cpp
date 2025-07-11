#include<iostream>
using namespace std;

class Data{
    public:
        void Greet(){
            cout << "Hello, World!" << endl;
        }
        void negGreet(void);
};

void Data::negGreet(){
    cout << "Hello, World!" << endl;
}

int main(){
    Data acc; // Default constructor
    acc.Greet(); // Calling method inside class
    cout << endl;
    acc.negGreet(); // Calling method outside class
    return 0;
}