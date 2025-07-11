// Store ASCII Values and print

#include <iostream>
using namespace std;

int main() {
    char arr[] = {'A', 'B', 'C', 'a', 'b', 'c', '1', '2', '3'};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Character\tASCII Value" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "\t\t" << int(arr[i]) << endl;
    }

    return 0;
}