// Delete a node from the head of linked list 

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

    // Add a node at the end
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

    // Delete node from head
    void deleteFromHead() {
        if (!head) {
            cout << "List is empty. Nothing to delete.\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Node deleted from head.\n";
    }

    // Print the list
    void printList() const {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // Destructor
    ~LinkedList() {
        while (head) {
            deleteFromHead();
        }
    }
};

int main() {
    LinkedList list;
    list.append(10);
    list.append(20);
    list.append(30);

    cout << "Original List: ";
    list.printList();

    list.deleteFromHead();  // Deletes 10

    cout << "After Deletion: ";
    list.printList();

    return 0;
}
