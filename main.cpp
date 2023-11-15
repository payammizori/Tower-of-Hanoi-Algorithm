//  main.cpp
//  stack
//
//  Created by Payam Mizori on 11/11/2023.
//

#include <iostream>
#include <vector>

using namespace std;

class Stack {
private:
    vector<int> elements;

public:
    // Function to push an element onto the stack
    void push(int value) {
        elements.push_back(value);
        cout << "Pushed: " << value << endl;
    }

    // Function to pop an element from the stack
    void pop() {
        if (!isEmpty()) {
            int poppedValue = elements.back();
            elements.pop_back();
            cout << "Popped: " << poppedValue << endl;
        } else {
            cout << "Stack is empty. Cannot pop." << endl;
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return elements.empty();
    }

    // Function to get the size of the stack
    vector<int>::size_type size() {
        return elements.size();
    }

    // Function to display the top element of the stack
    void top() {
        if (!isEmpty()) {
            cout << "Top element: " << elements.back() << endl;
        } else {
            cout << "Stack is empty. No top element." << endl;
        }
    }

    // Function to display all elements in the stack
    void display() {
        if (!isEmpty()) {
            cout << "Stack elements: ";
            for (int i : elements) {
                cout << i << " ";
            }
            cout << endl;
        } else {
         cout << "Stack is empty." << endl;
        }
    }
};

int main() {
    // Creating a stack object
    Stack myStack;

    // Testing stack operations
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    myStack.display();

    myStack.top();

    myStack.pop();
    myStack.display();

    myStack.pop();
    myStack.pop(); // Trying to pop from an empty stack

    return 0;
}
