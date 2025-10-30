/*
    Solution to 867 - Middle of the Linked List
    Given the head of a singly linked list, return the middle node of the linked list.

    If there are two middle nodes, return the second middle node.

    by regenpalkar28
*/

public:
    ListNode* middleNode(ListNode* head) {
        //Fast and slow pointer method
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast!=nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
};