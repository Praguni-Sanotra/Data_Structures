#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> *v = new vector<int>(n); //  vector with size n

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> x;
        (*v)[i] = x; // using index
    }

    cout << "Elements in the vector: ";
    for(int i = 0; i < v->size(); i++){
        cout << v->at(i) << " ";
    }

    cout << endl;

    delete v;
    return 0;
}