#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swap:  x = " << x << ", y = " << y << endl;

    char c1 = 'A', c2 = 'B';
    cout << "\nBefore swap: c1 = " << c1 << ", c2 = " << c2 << endl;
    swapValues(c1, c2);
    cout << "After swap:  c1 = " << c1 << ", c2 = " << c2 << endl;

    string s1 = "Hello", s2 = "World";
    cout << "\nBefore swap: s1 = " << s1 << ", s2 = " << s2 << endl;
    swapValues(s1, s2);
    cout << "After swap:  s1 = " << s1 << ", s2 = " << s2 << endl;

    return 0;
}
