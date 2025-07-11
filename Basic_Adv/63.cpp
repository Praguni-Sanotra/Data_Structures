//To avoid function overloading Templates are used 

#include<iostream>
using namespace std;

template<typename T, typename U>

auto sum(T a, U b){
    return a+b;
}

int main(){
    cout<< "Sum: "<<sum(10, 10.5)<<endl;
    cout<< "Sum: "<<sum(10.5, 10.5)<<endl;
    cout<< "Sum: "<<sum(10.5, 10)<<endl;
    cout<< "Sum: "<<sum(10, 10.5)<<endl;
}
