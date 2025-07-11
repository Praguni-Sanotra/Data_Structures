// Static Implementation 

#include<iostream>

using namespace std ;

class btech{
    public:
        int sweets;
        static int stv;     //static variable
};

int btech::stv = 2; // Initializing static variable globally

int main(){
    btech s1, s2;

    cout << s1.stv << endl; // Accessing static variable using object
    cout << s2.stv << endl; // Accessing static variable using another object

}