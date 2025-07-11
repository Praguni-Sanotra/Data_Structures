// Sum of array elements if array is given 
// arr = {10, 12, 45, 23, 77}

#include<iostream>
using namespace std;

int sumArray(int arr[], int n) {
    if(n == 0)
        return 0;
    return arr[n-1] + sumArray(arr, n-1);
}

int main() {
    int arr[] = {10, 12, 45, 23, 77};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of array elements: " << sumArray(arr, n) << endl;
    return 0;
}