//  main.cpp
//  stack
//  Created by Payam Mizori on 11/11/2023.

#include <iostream>
#include <stack>

class AdvancedStack {
private:
    std::stack<int> regularStack;
    std::stack<int> minStack;

public:
    void push(int x) {
        if (minStack.empty() || x <= getMin()) {
            minStack.push(x);
        }
        regularStack.push(x);
    }

    void pop() {
        if (regularStack.top() == getMin()) {
            minStack.pop();
        }
        regularStack.pop();
    }

    int getMin() {
        return minStack.top();
    }
};

int main() {
    AdvancedStack myStack;

    myStack.push(3);
    myStack.push(5);
    std::cout << "Min: " << myStack.getMin() << std::endl; // Output: 3

    myStack.push(2);
    myStack.push(1);
    std::cout << "Min: " << myStack.getMin() << std::endl; // Output: 1

    myStack.pop();
    std::cout << "Min: " << myStack.getMin() << std::endl; // Output: 2

    return 0;
}



   
