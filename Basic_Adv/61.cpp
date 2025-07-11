//Implement a function to ction to deleteseries of node 
// delete series (head, 2, 5)


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

Node* deleteSeries(Node* head, int start, int end) {
    if (!head || start > end || start < 1) return head;

    Node* dummy = new Node(0);
    dummy->next = head;
    Node* prev = dummy;

    for (int i = 1; i < start; i++) {
        if (!prev->next) return dummy->next;
        prev = prev->next;
    }

    Node* curr = prev->next;
    for (int i = start; i <= end; i++) {
        if (!curr) break;
        Node* temp = curr;
        curr = curr->next;
        delete temp;
    }

    prev->next = curr;

    Node* newHead = dummy->next;
    delete dummy;
    return newHead;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

Node* insertAtEnd(Node* head, int val) {
    Node* newNode = new Node(val);
    if (!head) return newNode;
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
    return head;
}
int main() {
    Node* head = NULL;
    for (int i = 1; i <= 10; i++)
        head = insertAtEnd(head, i);

    cout << "Original List:\n";
    printList(head);

    head = deleteSeries(head, 2, 5);  

    cout << "\nAfter Deleting Nodes from 2 to 5:\n";
    printList(head);

    return 0;
}
