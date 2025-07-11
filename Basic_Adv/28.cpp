// 2-D VECTOR

#include<iostream>
#include<vector>

using namespace std;

int main (){
    vector<vector<int>> v(3, vector<int>(3));

    cout << "Enter elements for 3x3 matrix: " << endl;
    for(int i = 0; i< 3; i++){
        for(int j = 0; j<3 ; j++){
            cin >> v[i][j];
        }
    }
    cout << "Matrix is: " << endl;
    for(int i = 0; i<3 ; i++){
        for(int j =0 ; j<3; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}