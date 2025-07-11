#include<iostream>
#include<algorithm>
using namespace std;

int num = 10;

int main(){
    int num = 20;

    int *ptr = &num;
    int &x = num;  // Creation of reference 

    cout << num << endl;
    cout << *ptr <<endl;
    cout << **(&ptr) << endl; // address of ptr dereferenced twice //20-output
    cout << *(&num) << endl << endl; //20-output

    cout << &num << endl; // address of num
    cout << ptr << endl; // address of num
    cout << &x << endl; // address of num (same as ptr)
    cout << *(&ptr) <<endl; // address of ptr
    return 0;
}

// * -> dereference 
// &num -> reference 