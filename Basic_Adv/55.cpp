//DOUBLY LINKED LIST 

#include<iostream>

using namespace std;

class node{

    public:
        int data;
        node* prev ;
        node* next;

        node(int d): data(d), prev(NULL), next(NULL){}
};

int main(){
    node* n1 = new node(10);
    node* n2 = new node(20);
    node* n3 = new node(30);
    node* n4 = new node(40);

    n1->next = n2; // Linking n1 to n2
    n2->prev = n1; // Linking n2 back to n1
    n2->next = n3; 
    n3->prev = n2; 
    n3->next = n4; 
    n4->prev = n3; 
    n4->next = NULL; 

    
}

