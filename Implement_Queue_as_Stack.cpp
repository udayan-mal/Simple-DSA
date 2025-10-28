// Implement Queue using Stacks
// LeetCode 232
// Time Complexity: Amortized O(1) per operation
// Space Complexity: O(n)

#include <stack>
using namespace std;

class MyQueue {
    stack<int> inStack;   // Used for enqueue operations
    stack<int> outStack;  // Used for dequeue and peek operations

public:
    // Constructor
    MyQueue() {}

    // Push element x to the back of queue.
    void enqueue(int x) {
        inStack.push(x);
    }

    // Helper function to transfer elements if outStack is empty
    void transfer() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
    }

    // Removes the element from the front of the queue and returns it.
    int dequeue() {
        transfer();
        int front = outStack.top();
        outStack.pop();
        return front;
    }

    // Get the front element.
    int peek() {
        transfer();
        return outStack.top();
    }

    // Returns true if the queue is empty, false otherwise.
    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};

// Example usage
#include <iostream>
int main() {
    MyQueue q;
    q.enqueue(1);
    q.enqueue(2);
    cout << q.peek() << endl;    // Output: 1
    cout << q.dequeue() << endl; // Output: 1
    cout << q.empty() << endl;   // Output: 0 (false)
    return 0;
}
