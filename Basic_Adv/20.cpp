#include<iostream>

using namespace std;

int main(){

    int *ptr = nullptr;

    {
        int num = 20;
        ptr = &num;

        cout << num << endl;
        cout <<ptr;

        cout << *ptr << endl;
    }
// Ptr has now become dangling pointer     

    cout << ptr << endl;
    cout << *ptr << endl;

return 0;
}