#include<iostream>
using namespace std;
int main(){
    int  a = 5;
    cout << "a = " << a; 

    //int &r; - error in cpp
    int &r = a;

    r = 7;
    cout<<"r: "<<a<<endl;
    cout << "a = " << a; 
    return 0;
}