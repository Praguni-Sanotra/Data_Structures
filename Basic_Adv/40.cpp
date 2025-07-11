// Binary Search Using Recursion

#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int key) {
    if(left > right)
        return -1; // not found
    int mid = left + (right - left) / 2;
    if(arr[mid] == key)
        return mid;
    else if(arr[mid] > key)
        return binarySearch(arr, left, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, right, key);
}

int main() {
    int arr[] = {10, 12, 23, 45, 77};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    int index = binarySearch(arr, 0, n - 1, key);
    if(index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found." << endl;
    return 0;
}

