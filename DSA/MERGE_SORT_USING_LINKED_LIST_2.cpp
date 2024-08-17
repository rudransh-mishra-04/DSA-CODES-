#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Function to get the middle node of the linked list (for splitting)
Node* getMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head->next;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

// Function to merge two sorted linked lists
Node* merge(Node* a, Node* b) {
    Node* result = nullptr;
    Node* temp = nullptr;

    // Pick either a or b, and recur for the rest
    if (a == nullptr) {
        return b;
    } else if (b == nullptr) {
        return a;
    }

    if (a->data <= b->data) {
        result = temp = a;
        a = a->next;
    } else {
        result = temp = b;
        b = b->next;
    }

    // Merge the remaining lists
    while (a != nullptr && b != nullptr) {
        if (a->data <= b->data) {
            temp->next = a;
            temp = temp->next;
            a = a->next;
        } else {
            temp->next = b;
            temp = temp->next;
            b = b->next;
        }
    }

    // Attach the remaining nodes (if any)
    temp->next = (a != nullptr) ? a : b;

    return result;
}

// Recursive function to sort the linked list using merge sort
Node* mergeSort(Node* head) {
    // Base case: 0 or 1 node
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Find the middle node
    Node* mid = getMiddle(head);

    // Split the linked list into two halves
    Node* secondHalf = mid->next;
    mid->next = nullptr;

    // Recursively sort the two halves
    Node* left = mergeSort(head);
    Node* right = mergeSort(secondHalf);

    // Merge the sorted halves
    return merge(left, right);
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Sample linked list
    Node* head = new Node(5);
    head->next = new Node(3);
    head->next->next = new Node(1);
    head->next->next->next = new Node(2);

    std::cout << "Original list: ";
    printList(head);

    // Sort the linked list using merge sort
    head = mergeSort(head);

    std::cout << "Sorted list: ";
    printList(head);

    return 0;
}

