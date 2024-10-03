#include "stack.h"
#include <iostream>

using namespace std;

int main() {
    int max_size;
    cout << "Enter the maximum size of the stack: ";
    cin >> max_size;

    Stack stack(max_size);

    string command;
    while (true) {
        cout << "\nEnter a command (push, pop, peek, size, display, expand, exit): ";
        cin >> command;

        if (command == "push") {
            if (stack.isFull()) {
                cout << "Stack is full! Cannot push more elements." << endl;
            } else {
                int data;
                cout << "Enter the data to push: ";
                cin >> data;
                stack.push(data);
            }
        } else if (command == "pop") {
            stack.pop();
        } else if (command == "peek") {
            stack.peek();
        } else if (command == "size") {
            stack.size();
        } else if (command == "display") {
            stack.display();
        } else if (command == "expand") {
            int new_size;
            cout << "Enter the new maximum size for the stack: ";
            cin >> new_size;
            stack.expand(new_size);
        } else if (command == "exit") {
            cout << "Exiting..." << endl;
            break;
        } else {
            cout << "Invalid command! Please try again." << endl;
        }
    }

    return 0;
}
