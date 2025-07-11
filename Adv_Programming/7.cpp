//Constructor having parameters are parameterized constructors.

#include<iostream>

using namespace std;

class Data{
    public:
        int age;
        string name;
        Data(){
            cout << "Hello, World!" << endl;
        }
        Data(int age, string n = "Praguni"){
            this -> age = age;
            this -> name = n;
        }
        void Print(void);
};

void Data::Print(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}

int main(){
    Data acc;
    //acc.Print();
    Data ac(20);
    ac.Print();
    return 0; 
}
