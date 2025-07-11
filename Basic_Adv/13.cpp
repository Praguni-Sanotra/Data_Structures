#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector <int> v = {23, 10, 24, 78, 89, 45};

    cout<< v.front()<<endl;
    cout<<v.back()<<endl;

    cout << *v.begin() << endl;
    cout << *(v.end() - 1) << endl;

    return 0;
}