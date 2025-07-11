#include<iostream>
using namespace std;

class btech{
    public:
        int roll;
        float cgpa;
        btech(){
        }

        btech(int r, float c){
            roll = r;
            cgpa = c;
        }
};

int main(){
    btech s1 (34,12.3);
    btech s2;
}