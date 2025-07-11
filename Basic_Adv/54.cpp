#include<iostream>

using namespace std;

class btech {
    public:
        int nonStatic;
        static int staticVar; // Static variable declaration

        btech() : nonStatic(10){}

        static void staticFun(){
            cout << "I am Static Method : " << endl;
            cout << "Static Variable: " << staticVar << endl;
            cout << "Non-Static Variable: " << 10 << endl; // Cannot access non-static variable directly
        }

        void nonStaticFun(){
            cout << "I am Non-Static Method : " << endl;
            cout << "Static Variable: " << staticVar << endl; // Can access static variable
            cout << "Non-Static Variable: " << nonStatic << endl; // Can access non-static variable
        }
};

int btech::staticVar = 5; // Static variable definition and initialization

int main(){
    btech s1, s2;

    s1.nonStaticFun();
    s1.staticFun(); // Calling static method using object
}