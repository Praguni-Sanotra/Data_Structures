//Sum of n natural numbers using recursion

#include <iostream>
using namespace std;

int sum(int n) {
    if(n == 1)
        return 1;
    return n + sum(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of first " << n << " natural numbers is " << sum(n) << endl;
    return 0;
}

