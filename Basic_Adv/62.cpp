// Function Overloading and Templates 
// In C++, any number that is written in decimals is considered as float or double 

#include<iostream>

using namespace std;
int sum(int a, int b){
    return a+b;
}

float sum(float a, float b){
    return a+b;
}

float sum(float a, int b){
    return a+b;
}

float sum(int a, float b){          //function overloading 
    return a+b;
}
int main(){
    cout << "Sum :" <<sum(10, 10)<<endl;
    cout << "Sum :" <<sum(10.5f, 10.5f)<<endl;
    cout << "Sum :" <<sum(10.5f, 10)<<endl;
    cout << "Sum :" <<sum(10, 10.5f)<<endl;

}