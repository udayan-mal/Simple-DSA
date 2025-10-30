#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void deleteNode(Node** head_ref, int key) {
    Node* temp = *head_ref;
    Node* prev = nullptr;

    if (temp != nullptr && temp->data == key) {
        *head_ref = temp->next;
        delete temp;
        return;
    }

    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) return;

    prev->next = temp->next;
    delete temp;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);
    printList(head);
    deleteNode(&head, 20);
    printList(head);
    return 0;
}
