#include<iostream>
#include<stdio.h>
using namespace std;

/* struct Data {
    int a;
    double b;
};

struct Data acc;

int main() {
    acc.a = 10;
    acc.b = 13.23;
    cout << "a: " << acc.a << endl;
} */

struct Data {
    int a;
    double b;
};

struct Data acc[5];

int main(){
    int x;
    double y;
    for(int i = 0; i < 5; i++) {
        cin >> x;
        cin >> y;
        cout << "Enter a and b for acc[" << i << "]: ";
        acc[i].a = x;
        acc[i].b = y;
    }
}
