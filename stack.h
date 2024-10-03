#ifndef STACK_H
#define STACK_H

class Node {
public:
    int data;
    Node* next;
    Node(int data);  // Constructor
};

class Stack {
private:
    Node* top;       // Points to the top of the stack
    int count;       // Current size of the stack
    int max_size;    // Maximum stack size

public:
    Stack(int max_size);  // Constructor
    bool isEmpty();       // Check if the stack is empty
    bool isFull();        // Check if the stack is full
    void push(int data);  // Push an element
    void pop();           // Pop the top element
    void peek();          // View the top element
    void size();          // Get the current size of the stack
    void display();       // Display all elements
    void expand(int new_size);  // Expand the size of the stack
};

#endif  // STACK_H
