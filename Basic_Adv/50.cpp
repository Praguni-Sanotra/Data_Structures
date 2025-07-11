#include<iostream>

using namespace std;

class btech{
    public: 
        int roll;
        float cgpa;

        btech(){}

        btech(int r, float f) : roll(r), cgpa(f) {}
};

int main(){
    btech s1, s2(44,8.9);

    cout << "Roll: " << s1.roll << ", CGPA: " << s1.cgpa << endl;

    btech s3 = s2;
    cout << "Roll: " << s3.roll << ", CGPA: " << s3.cgpa << endl;
    return 0;
}