/* 
    Solution for Leetcode QNo. 206 - Reverse a Linked List in C++

    Given the head of a singly linked list, reverse the list, and return the reversed list.

    by regenpalkar28
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // optimal
        ListNode* back = nullptr;
        ListNode* curr = head;

        while(curr!=nullptr) {
            ListNode* front = curr->next;
            curr->next = back;
            back = curr;
            curr = front;
        }
        
        return back;
    }
};