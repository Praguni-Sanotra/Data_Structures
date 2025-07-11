#include<iostream>
using namespace std;

void func( int num ){
    num = 10;
}

int main () {
    int num = 20;
    cout << num << endl;

    func(num); // Call by value 
    //func( &num ) // Call by reference
    cout  << num << endl;

    return 0;
}