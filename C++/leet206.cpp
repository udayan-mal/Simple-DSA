
#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Solution class
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr = head, *next = NULL, *pre = NULL;
        while (curr != NULL) {
            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        return pre;
    }
};

// Function to print the linked list
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        cout << temp->val;
        if (temp->next != NULL) cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to create a linked list from user input
ListNode* createList(int n) {
    if (n <= 0) return NULL;

    int val;
    cout << "Enter value for node 1: ";
    cin >> val;
    ListNode* head = new ListNode(val);
    ListNode* current = head;

    for (int i = 2; i <= n; i++) {
        cout << "Enter value for node " << i << ": ";
        cin >> val;
        current->next = new ListNode(val);
        current = current->next;
    }
    return head;
}

int main() {
    int n;
    cout << "Enter number of nodes in the linked list: ";
    cin >> n;

    // Create the linked list
    ListNode* head = createList(n);

    cout << "\nOriginal Linked List: ";
    printList(head);

    // Reverse the linked list
    Solution sol;
    ListNode* reversedHead = sol.reverseList(head);

    cout << "\nReversed Linked List: ";
    printList(reversedHead);

    return 0;
}
