#include<iostream>
using namespace std;

class btech{

    public:
        int roll;
        float cgpa;

        btech(){

        }

        btech(int r, float c) : roll(r), cgpa(c) {
            cout << "Constructor called with two parameters" << endl;
        }
};

int main(){
    btech s1, s2(44,8.9);

    cout << "Roll: " << s1.roll << ", CGPA: " << s1.cgpa << endl;

    btech s3(34,12.3);
}