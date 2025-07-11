//SUM OF VECTOR ELEMENTS 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int n, sum = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i<v.size(); i++){
        sum += v[i];
    }

    cout << "Sum of elements: " << sum << endl;

    return 0;
}