// Write a template function called TotalCount that takes an array, its size and a value of any data type as parameters.
// The function should return the number of times the value appears in array.

#include<iostream>
using namespace std;

template <typename T>
int TotalCount(T array[], int size, T value){
    int count = 0;
    for(int i =0; i<size; i++){
        if(array[i] == value){
            count ++;
        }
    }
    return count;
}

int main(){
    int intArr[] = {1,2,3,4,5,6};
    double doubleArr[] = {1.1, 2.2, 3.3, 2.2};
    char charArr[] = {'a', 'b', 'c'};

    cout << "Count of 2 in intArr: " << TotalCount(intArr, 6, 2) << endl;
    cout << "Count of 2.2 in doubleArr: " << TotalCount(doubleArr, 4, 2.2) << endl;
    cout << "Count of 'a' in charArr: " << TotalCount(charArr, 4, 'a') << endl;

    return 0;

}