#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector < int > v = {23, 10, 24, 78, 89, 45};

    for(auto i : v) 
        cout << i << " ";

        sort(v.begin(), v.end()); // sort the vector in ascending order
}