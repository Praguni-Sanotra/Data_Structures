#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector <int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    int i = 0;
    while(i != v.size()) {
        cout << v[i]<< " ";
        i++;
    }
}