//WAT to take name, roll, and cgpa of two students and print it.

//Note: take data using getdata() function and print it using putdata() function

#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;
    float cgpa;
    //char name[20];;
public:
    void getdata() {
        cout << "Enter name: ";
        cin>>name; //it shows an error due to single word input 
        getline(cin, name);
        //scanf("%[^\n]s", name)
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter CGPA: ";
        cin >> cgpa;
        cin.ignore();
    }
    void putdata() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s1, s2;
    cout << "Enter details for student 1:" << endl;
    s1.getdata();
    cout << "Enter details for student 2:" << endl;
    s2.getdata();

    cout << "\nDetails of student 1:" << endl;
    s1.putdata();
    cout << "\nDetails of student 2:" << endl;
    s2.putdata();

    return 0;
}