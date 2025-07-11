// CONSTRUCTOR
// Constructor is special type of member function or method in c++ that is automatically called when an object of a class is created. 
//It is used to initialize the object. 
//Constructor has same name as class and does not have return type in c++.
//Automatically invokes at the time of object creation.
//For constructors, memory will be allocated only once at the time of object creation.
//They do nat have any return type.
//WRT parameterised constructor , we can pass the arguments at the time of object creation with help of parenthesis.
//Constructor Should always be public.



//TYPES OF CONSTRUCTOR  -- There are major types of constructors in C++:
//1. Default constructor - It is automatically called or passed by the compiler whe dont create any constructor. 
//It initializes the object with default values.`
//2. Parameterised constructor 
//3. Copy constructor


// Other types of constructors are:
//4. Move constructor
//5. Delegating constructor
//6. Conversion constructor
//7. Static constructor
//8. Virtual constructor
//9. Copy assignment operator
//10. Move assignment operator

// Non-parameterized constructor : A non-parameterized constructor is a constructor that does not take any parameters.


#include<iostream>

using namespace std;

class Data{
    public:
        int age;
        string name;
        Data(){
            cout << "Hello, World!" << endl;
        }
        Data(int a, string n = "Praguni"){
            age = a;
            name = n;
        }
        void Print(void);
};

void Data::Print(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}

int main(){
    Data acc;
    acc.Print();
    Data ac(20);
    ac.Print();
    return 0; 
}


// Constructor Overloading