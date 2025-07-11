#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void append(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next)
                temp = temp->next;
            temp->next = newNode;
        }
    }
    void printList() const {
        Node* temp = head;
        while (temp) {
            cout << "Data: " << temp->data
                 << " | Address: " << temp
                 << " | Next: " << temp->next << endl;
            temp = temp->next;
        }
    }

    ~LinkedList() {
        Node* temp;
        while (head) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;
    list.append(10);
    list.append(20);
    list.append(30);

    cout << "Linked List with Addresses:\n";
    list.printList();

    return 0;
}
