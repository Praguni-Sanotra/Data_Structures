// Implement the properties of stack through array

#include <iostream>
using namespace std;

#define MAX 5

class Stack {
    int arr[MAX];
    int top;
public:
    Stack() { top = -1; }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    void push(int x) {
        if(isFull()) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = x;
        cout << x << " pushed to stack." << endl;
    }

    void pop() {
        if(isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        cout << arr[top--] << " popped from stack." << endl;
    }

    int peek() {
        if(isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    void display() {
        if(isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        for(int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(30);
    s.push(30);
    s.push(30);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    cout << "Top element: " << s.peek() << endl;
    return 0;
}


// while not is full 
// cout << top element