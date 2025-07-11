//Traversing using Recursion 


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void insertEnd(Node*& head, int data) {
    Node* newNode = new Node{data, nullptr, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

void traverseForwardRec(Node* node) {
    if (!node) return;
    cout << node->data << " ";
    traverseForwardRec(node->next);
}

void traverseBackwardRec(Node* node) {
    if (!node) return;
    traverseBackwardRec(node->next);
    cout << node->data << " ";
}

int main() {
    Node* head = nullptr;

    insertEnd(head, 1);
    insertEnd(head, 2);
    insertEnd(head, 3);
    insertEnd(head, 4);

    cout << "Forward Traversal (Recursive): ";
    traverseForwardRec(head);
    cout << endl;

    cout << "Backward Traversal (Recursive): ";
    traverseBackwardRec(head);
    cout << endl;

    return 0;
}
