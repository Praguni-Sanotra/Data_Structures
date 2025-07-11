#include<iostream>

using namespace std;

class btech{
    public:
        int roll;
        float cgpa;

        btech() : roll(555), cgpa(8.05){}

        void print(){
            cout << "Address using this keyword: " << this << endl;
        }
};

int main(){
    btech s1;
    cout << "Address of s1: " << &s1 << endl;
    s1.print();

    btech s2;
    cout << "Address of s2: " << &s2 << endl;
    s2.print();

    return 0;
}