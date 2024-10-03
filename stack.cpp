#include "stack.h"
#include <iostream>

using namespace std;

// Node constructor
Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}

// Stack constructor
Stack::Stack(int max_size) {
    top = nullptr;
    count = 0;
    this->max_size = max_size;
}

// Check if the stack is empty
bool Stack::isEmpty() {
    return top == nullptr;
}

// Check if the stack is full
bool Stack::isFull() {
    return count == max_size;
}

// Push an element to the stack
void Stack::push(int data) {
    if (isFull()) {
        cout << "Stack is full! Cannot push more elements." << endl;
        return;
    }
    Node* newNode = new Node(data);
    newNode->next = top;
    top = newNode;
    count++;
    cout << "Pushed " << data << " into the stack." << endl;
}

// Pop an element from the stack
void Stack::pop() {
    if (isEmpty()) {
        cout << "Stack is empty! Cannot pop." << endl;
        return;
    }
    Node* temp = top;
    top = top->next;
    cout << "Popped " << temp->data << " from the stack." << endl;
    delete temp;
    count--;
}

// Peek the top element of the stack
void Stack::peek() {
    if (isEmpty()) {
        cout << "Stack is empty! Cannot peek." << endl;
    } else {
        cout << "Top element is " << top->data << "." << endl;
    }
}

// Display the current size of the stack
void Stack::size() {
    cout << "Current stack size: " << count << " (Max size: " << max_size << ")" << endl;
}

// Display all elements in the stack
void Stack::display() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
    } else {
        Node* current = top;
        cout << "Stack elements from top to bottom: ";
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "None" << endl;
    }
}

// Expand the stack size
void Stack::expand(int new_size) {
    if (new_size <= max_size) {
        cout << "New size must be greater than current max size." << endl;
        return;
    }
    max_size = new_size;
    cout << "Expanded stack size to " << max_size << "." << endl;
}
