#include<iostream>

using namespace std;

class btech{
    public:
        int roll;
        float cgpa;

        btech() : roll(555), cgpa(8.8) {}

        void print() {
            cout << "Address using this keyword: "<< endl;
    }
};
int main(){
        btech s1;
        cout << "Address of s1: " << &s1 << endl;
        s1.print();

}   