// Print table using recursion

#include <iostream>
using namespace std;

void printTable(int num, int i, int n) {
    if(i > n) return;
    cout << num << " x " << i << " = " << num * i << endl;
    printTable(num, i + 1, n);
}

int main() {
    int n;
    cout << "Enter the range for table of 5: ";
    cin >> n;
    printTable(510, 1, n);
    return 0;
}

