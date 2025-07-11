//WAP to search element in an array and return the index using recursion

#include <iostream>
using namespace std;

int search(int arr[], int n, int key) {
    if(n == 0)
        return -1; // not found
    if(arr[n-1] == key)
        return n-1;
    return search(arr, n-1, key);
}

int main() {
    int arr[] = {10, 12, 45, 23, 77};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    int index = search(arr, n, key);
    if(index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found." << endl;
    return 0;
}