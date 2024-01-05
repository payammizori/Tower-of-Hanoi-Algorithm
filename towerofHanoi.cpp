//  main.cpp
//  tower of hanoi using stack algorithm 
//  Created by Payam Mizori on 11/11/2023.

#include <iostream>
#include <stack>

using namespace std;

struct HanoiState {
    int n;      // Number of disks
    char source, aux, dest;  // Pegs
    int action;

    HanoiState(int _n, char _source, char _aux, char _dest, int _action = 0)
        : n(_n), source(_source), aux(_aux), dest(_dest), action(_action) {}
};

void iterativeTowerOfHanoi(int n, char source, char aux, char dest) {
    stack<HanoiState> stateStack;
    stateStack.push(HanoiState(n, source, aux, dest));

    while (!stateStack.empty()) {
        HanoiState currentState = stateStack.top();
        stateStack.pop();

        if (currentState.n == 1) {
            
            cout << "Move disk 1 from " << currentState.source << " to " << currentState.dest << std::endl;
        } else {
            if (currentState.action == 0) {
                // Move n-1 disks from source to aux using dest
                stateStack.push(HanoiState(currentState.n - 1, currentState.aux, currentState.source, currentState.dest, 0));

                // Move the nth disk from source to dest
                stateStack.push(HanoiState(1, currentState.source, currentState.aux, currentState.dest, 1));

                // Move the n-1 disks from aux to dest using source
                stateStack.push(HanoiState(currentState.n - 1, currentState.source, currentState.dest, currentState.aux, 0));
            } else {
                // Perform the actual disk movement
                cout << "Move disk " << currentState.n << " from " << currentState.source << " to " << currentState.dest <<endl;
            }
        }
    }
}

int main() {
    int n = 3; // Number of disks
    char source = 'A', aux = 'B', dest = 'C'; // Pegs

    iterativeTowerOfHanoi(n, source, aux, dest);

    return 0;
}
