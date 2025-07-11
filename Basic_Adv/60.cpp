//Delete at specific position 

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

void insert(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

void deleteAtPosition(Node*& head, int position) {
    if (!head || position < 0) {
        cout << "Invalid position or empty list." << endl;
        return;
    }

    Node* temp = head;

    if (position == 0) {
        head = head->next;
        delete temp;
        return;
    }

    for (int i = 0; temp != nullptr && i < position - 1; ++i) {
        temp = temp->next;
    }

    if (!temp || !temp->next) {
        cout << "Position out of bounds." << endl;
        return;
    }

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;

    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);

    cout << "Original List: ";
    printList(head);

    deleteAtPosition(head, 0);
    cout << "After deleting at position 0: ";
    printList(head);

    deleteAtPosition(head, 2);
    cout << "After deleting at position 2: ";
    printList(head);

    return 0;
}
