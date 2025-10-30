/**
 * Implementation of Stack using two queues
 * This is an interesting implementation where we use two queues to simulate a stack
 * Time Complexity:
 * - Push: O(1)
 * - Pop: O(n)
 * - Top: O(1)
 * Space Complexity: O(n)
 */

#include <iostream>
#include <queue>
using namespace std;

class StackUsingQueues {
private:
    queue<int> q1; // Main queue
    queue<int> q2; // Auxiliary queue
    int curr_size; // Current number of elements

public:
    StackUsingQueues() {
        curr_size = 0;
    }

    /**
     * Push operation: Simply enqueue to q1
     * Time complexity: O(1)
     */
    void push(int x) {
        curr_size++;
        q1.push(x);
    }

    /**
     * Pop operation: Move all elements except last from q1 to q2
     * Then get the last element from q1 (which is the top of stack)
     * Finally, swap q1 and q2
     * Time complexity: O(n)
     */
    int pop() {
        if (q1.empty())
            return -1;

        // Leave one element in q1 and move rest to q2
        while (q1.size() != 1) {
            q2.push(q1.front());
            q1.pop();
        }

        // Get the last element from q1
        int temp = q1.front();
        q1.pop();
        curr_size--;

        // Swap the names of q1 and q2
        queue<int> q = q1;
        q1 = q2;
        q2 = q;

        return temp;
    }

    /**
     * Top operation: Return the last pushed element
     * Time complexity: O(1)
     */
    int top() {
        if (q1.empty())
            return -1;

        // Move all elements except last from q1 to q2
        while (q1.size() != 1) {
            q2.push(q1.front());
            q1.pop();
        }

        // Get the last element
        int temp = q1.front();

        // Push it to q2
        q2.push(temp);
        q1.pop();

        // Swap the names of q1 and q2
        queue<int> q = q1;
        q1 = q2;
        q2 = q;

        return temp;
    }

    /**
     * Get current size of stack
     * Time complexity: O(1)
     */
    int size() {
        return curr_size;
    }

    /**
     * Check if stack is empty
     * Time complexity: O(1)
     */
    bool empty() {
        return curr_size == 0;
    }
};

// Main function to test the implementation
int main() {
    StackUsingQueues s;

    // Test push operation
    cout << "Pushing elements: 1, 2, 3, 4, 5" << endl;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // Test top operation
    cout << "Top element: " << s.top() << endl;

    // Test pop operation
    cout << "Popping elements:" << endl;
    while (!s.empty()) {
        cout << s.pop() << " ";
    }
    cout << endl;

    // Test empty operation
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;

    // Test pushing after popping all elements
    cout << "\nPushing elements again: 10, 20, 30" << endl;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Current size: " << s.size() << endl;
    cout << "Top element: " << s.top() << endl;

    return 0;
}
