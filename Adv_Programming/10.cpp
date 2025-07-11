//COPY CONSTRUCTOR
#include<iostream>

using namespace std;

class Data{
    public:
        string name;
        int age;

        Data(string name, int age) {
            this -> name = name;
            this -> age = age;
        }

        // Custom copy constructor
        Data(const Data &obj) {
            name = obj.name;
            age = obj.age;
            cout << "Custom copy constructor." << endl;
        }

        void printDetails(void){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main(){
    Data M1("Praguni", 20);
    M1.printDetails();
    
    Data M2(M1);  
    M2.printDetails();
    return 0;
}

