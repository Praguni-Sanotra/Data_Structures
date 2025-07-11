#include<iostream>
using namespace std;

int num = 10;

int main(){
    int num = 20;

    int *ptr = &num;
    int &x = num;  // Creation of reference 

    cout << num <<endl; // 20
    cout << ::num << endl; // Scope resolution operator(::) to print global value 
    cout << ptr <<endl; //address of num
    cout << x <<endl; //20
}
