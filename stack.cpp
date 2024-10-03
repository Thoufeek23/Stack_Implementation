#include "stack.h"
#include <iostream>

using namespace std;

Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}

Stack::Stack(int max_size) {
    top = nullptr;
    count = 0;
    this->max_size = max_size;
}

bool Stack::isEmpty() {
    return top == nullptr;
}

bool Stack::isFull() {
    return count == max_size;
}

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

void Stack::peek() {
    if (isEmpty()) {
        cout << "Stack is empty! Cannot peek." << endl;
    } else {
        cout << "Top element is " << top->data << "." << endl;
    }
}

void Stack::size() {
    cout << "Current stack size: " << count << " (Max size: " << max_size << ")" << endl;
}

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

void Stack::expand(int new_size) {
    if (new_size <= max_size) {
        cout << "New size must be greater than current max size." << endl;
        return;
    }
    max_size = new_size;
    cout << "Expanded stack size to " << max_size << "." << endl;
}
