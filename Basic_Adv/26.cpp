#include<iostream>
#include<vector>

using namespace std;

int main(){
    //vector<int> v = {10, 20, 30, 40, 50}; // static allocation
    vector<int> *v = new vector<int>; //dynamic allocation

    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(int i =0; i<n; i++){
        cin>>x;
        v->push_back(x);
    }

    cout << "Elements in the vector: ";
    for (int i = 0;i < v ->size(); i++){
        cout << v->at(i) << " ";
    }

    cout << endl;

    delete v;
    return 0;

}