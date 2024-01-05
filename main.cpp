//  main.cpp
//  stack
//  Created by Payam Mizori on 11/11/2023.

#include <iostream>

class Stack {
private:
    int* elements;
    int capacity;
    int topIndex;

public:
    // Constructor
    Stack(int size) : capacity(size), topIndex(-1) {
        elements = new int[capacity];
    }

    // Destructor to free allocated memory
    ~Stack() {
        delete[] elements;
    }

    // Function to push an element onto the stack
    void push(int value) {
        if (topIndex < capacity - 1) {
            topIndex++;
            elements[topIndex] = value;
            std::cout << "Pushed: " << value << std::endl;
        } else {
            std::cout << "Stack is full. Cannot push." << std::endl;
        }
    }

    // Function to pop an element from the stack
    void pop() {
        if (topIndex >= 0) {
            int poppedValue = elements[topIndex];
            topIndex--;
            std::cout << "Popped: " << poppedValue << std::endl;
        } else {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return topIndex == -1;
    }

    // Function to get the size of the stack
    int size() {
        return topIndex + 1;
    }

    // Function to display the top element of the stack
    void top() {
        if (!isEmpty()) {
            std::cout << "Top element: " << elements[topIndex] << std::endl;
        } else {
            std::cout << "Stack is empty. No top element." << std::endl;
        }
    }

    // Function to display all elements in the stack
    void display() {
        if (!isEmpty()) {
            std::cout << "Stack elements: ";
            for (int i = 0; i <= topIndex; i++) {
                std::cout << elements[i] << " ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "Stack is empty." << std::endl;
        }
    }
};

int main() {
    // Creating a stack object with a capacity of 3
    Stack myStack(3);

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


   
