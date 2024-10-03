#ifndef STACK_H
#define STACK_H

class Node {
public:
    int data;
    Node* next;
    Node(int data);
};

class Stack {
private:
    Node* top;
    int count;
    int max_size;

public:
    Stack(int max_size);
    bool isEmpty();
    bool isFull();
    void push(int data);
    void pop();
    void peek();
    void size();
    void display();
    void expand(int new_size);
};

#endif
