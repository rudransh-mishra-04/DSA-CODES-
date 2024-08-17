#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to add two numbers represented by linked lists
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummyHead = new ListNode(0);
    ListNode* p = l1, * q = l2, * curr = dummyHead;
    int carry = 0;

    while (p != NULL || q != NULL) {
        int x = 0;
        if (p != NULL) {
            x = p->val;
            p = p->next;
        }
        
        int y = 0;
        if (q != NULL) {
            y = q->val;
            q = q->next;
        }
        
        int sum = carry + x + y;
        carry = sum / 10;
        curr->next = new ListNode(sum % 10);
        curr = curr->next;
    }

    if (carry > 0) {
        curr->next = new ListNode(carry);
    }

    return dummyHead->next;
}

// Function to print the linked list
void printList(ListNode* node) {
    while (node != NULL) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

// Function to insert a new node at the beginning
void push(ListNode*& head, int new_data) {
    ListNode* new_node = new ListNode(new_data);
    new_node->next = head;
    head = new_node;
}

int main() {
    ListNode* l1 = NULL;
    ListNode* l2 = NULL;

    // Create first number: 342 (represented as 2 -> 4 -> 3)
    push(l1, 3);
    push(l1, 4);
    push(l1, 2);

    // Create second number: 465 (represented as 5 -> 6 -> 4)
    push(l2, 4);
    push(l2, 6);
    push(l2, 5);

    cout << "First List: ";
    printList(l1);
    cout << "Second List: ";
    printList(l2);

    // Add the two lists and see the result
    ListNode* result = addTwoNumbers(l1, l2);
    cout << "Resultant List: ";
    printList(result);

    return 0;
}


