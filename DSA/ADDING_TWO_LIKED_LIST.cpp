#include <iostream>

// Define a node struct to represent a node in the linked list
struct Node {
  int data;
  Node* next;

  // Constructor to initialize a node with data
  Node(int data) : data(data), next(nullptr) {}
};

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(Node** head, int data) {
  // Create a new node
  Node* newNode = new Node(data);

  // Set the new node's next pointer to the current head
  newNode->next = *head;

  // Update the head pointer to point to the new node
  *head = newNode;
}

// Function to print the linked list
void printList(Node* head) {
  // Iterate through the list until the end (null pointer)
  while (head != nullptr) {
    // Print the current node's data followed by an arrow
    std::cout << head->data << " -> ";

    // Move to the next node
    head = head->next;
  }

  // Print "NULL" to indicate the end of the list
  std::cout << "NULL" << std::endl;
}

// Function to add two linked lists (assuming non-negative integers)
Node* addLists(Node* list1, Node* list2) {
  // Create a dummy head node for the resulting list (value doesn't matter)
  Node* dummyHead = new Node(0);

  // Current pointer to traverse the resulting list
  Node* curr = dummyHead;

  // Variable to store any carryover from digit addition
  int carry = 0;

  // Loop until both lists are exhausted and there's no carry
  while (list1 || list2 || carry) {
    int sum = carry;

    // If there's a node in the first list, add its data to the sum
    if (list1) {
      sum += list1->data;
      list1 = list1->next;
    }

    // If there's a node in the second list, add its data to the sum
    if (list2) {
      sum += list2->data;
      list2 = list2->next;
    }

    // Calculate the carry for the next digit (integer division by 10)
    carry = sum / 10;

    // Create a new node for the current digit of the sum
    curr->next = new Node(sum % 10);

    // Move the current pointer to the newly created node
    curr = curr->next;
  }

  // Return the actual list (excluding the dummy head)
  return dummyHead->next;
}

int main() {
  // Include namespace std to avoid repeatedly using std::
  using namespace std;

  // Create first linked list
  Node* head1 = nullptr;
  insertAtBeginning(&head1, 3);
  insertAtBeginning(&head1, 4);
  insertAtBeginning(&head1, 2);

  // Create second linked list
  Node* head2 = nullptr;
  insertAtBeginning(&head2, 7);
  insertAtBeginning(&head2, 5);
  insertAtBeginning(&head2, 9);

  // Print the original lists
  cout << "List 1: ";
  printList(head1);
  cout << "List 2: ";
  printList(head2);

  // Add the lists
  Node* resultList = addLists(head1, head2);

  // Print the resulting list
  cout << "Result List: ";
  printList(resultList);

  return 0;
}

