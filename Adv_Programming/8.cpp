//Constructor having parameters are parameterized constructors.
//Wrapping of a data and member function in a single unit is called as Data Encapsulation

#include<iostream>

using namespace std;

class Data{
    private:
        int age;
        string name;
        public:
        void getData(void){
            cout <<"name : "; cin>>name;
            cout <<"age : "; cin>>age;
        }
        void Print(void);
};

void Data::Print(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}

int main(){
    //Data acc;
    //acc.Print();
    Data acc;
    acc.getData();
    acc.Print();
    return 0; 
}
