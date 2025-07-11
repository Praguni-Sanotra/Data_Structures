#include<iostream>

using namespace std ;

class party{

    public:
        int samosa;
        int mithai;
        string drink;

        // Initialiser List 
        party(): samosa(2), mithai(3), drink("cold coffee"){ }

        void print(){
            cout << "Samosa: " << samosa << endl;
            cout << "Mithai: " << mithai << endl;
            cout << "Drink: " << drink << endl;
        }
};

int main(){
    party s1, s2, s3;
    s1.print();
    s2.print();
}