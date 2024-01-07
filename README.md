Problem definition:
The Tower of Hanoi is a classical mathematical puzzle involving moving a tower of N disks from the source to the destination using an auxiliary peg under the following conditions: 
1.     You can only move one disk at a time.
2.     In each move, the upper disk is taken from one stack and placed on top of another stack.
3.     It is not possible to stack smaller disks on top of larger disks.

Overview:

The algorithm's goal is to solve the Tower of Hanoi problem one step at a time, using an explicit stack to mimic recursive calls. As an idea, the problem's state should be shown as a structure (HanoiState), and the process should be managed by a stack.


Data Structures:

HanoiState Structure:
1.	n: Number of disks
2.	source, aux, dest: Pegs
3.	action: Action to perform (0: No action, 1: Move from source to dest)


Logic and Method:

1. Put the problem's starting state on a stack called stateStack.
2. If the stack isn't empty, do the following: a. Remove the top state from the stack. b. If n is 1, move the disk from source to dest without stopping. c. If n is greater than 1, push subproblems to the top of the stack to simulate the recursive calls. d. If the action is set, move the disk automatically.
3. Do this again and again until the stack is empty.

Logic and Method:

1. Put the problem's starting state on a stack called stateStack.
2. If the stack isn't empty, do the following: a. Remove the top state from the stack. b. If n is 1, move the disk from source to dest without stopping. c. If n is greater than 1, push subproblems to the top of the stack to simulate the recursive calls. d. If the action is set, move the disk automatically.
3. Do this again and again until the stack is empty.



Code Organization and Comments:

The code is well-organized into functions to make it easier to read. • There are enough notes to explain what each part does and how it works.

Code Organization and Comments:

The code is well-organized into functions to make it easier to read. • There are enough notes to explain what each part does and how it works.

Analysis:

Time Complexity: It takes O(2^n) time to run the method, where n is the number of disks.
Each disk has two recursive calls, which makes the problem exponentially hard to solve.

Space Complexity: It takes O(n) space, where n is the number of disks.
The amount of room needed is equal to the deepest level of the recursive calls.


Testing and Result:
Test Case 1:
•	Input: n = 3, source = 'A', aux = 'B', dest = 'C'
•	Result: The program prints each step of the Tower of Hanoi solution.
Test Case 2:
•	Input: n = 0 (edge case with no disks)
•	Result: The program terminates without any disk movement.
Test Case 3:
•	Input: n = 5, source = 'A', aux = 'B', dest = 'C'
•	Result: The program successfully moves the tower of 5 disks.


Rationale and Insights:

If you use a clear stack instead of repeated function calls, you can get a better iterative answer with less work. The stack is used by the method to store and handle the state of the subproblems.
To change the recursive answer to an iterative one, you had to be very careful with managing the state and copying how recursive calls work.

Conclusion:

The Tower of Hanoi method uses a clear stack to solve the problem repeatedly. The chosen method shows how to change recursive algorithms to iterative ones, and different test cases show that the algorithm works correctly and efficiently.
![image](https://github.com/payammizori/Tower-of-Hanoi-Algorithm/assets/86834326/f6eefd9a-e1e4-4329-9d8d-d345e4d188be)
