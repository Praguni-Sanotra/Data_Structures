#include<iostream>
using namespace std;

class btech{
    public:
        int roll;
        float cgpa;
        btech(){
            cout << "Constructor called with no parameters." << endl;
        }

        btech(int r){
            cout << "Constructor called with one parameter" << endl;
        }

        btech(int r, float c){
            cout << "Constructor called with two parameters" << endl;
        }

        ~btech(){
            cout << "Destructor called." << endl;
        }
};

int main(){
    btech s1 (34,12.3);
    btech s2;
    btech s3;

    btech *s4 = new btech(10, 8.2);

    delete s4; // Explicitly calling destructor for dynamic object
    return 0;
}