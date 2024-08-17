#include <iostream>
#include <stack>
using namespace std;

// Function to delete the middle element of a stack
void deleteMiddle(stack<int> &st, int n, int curr = 0) {
    // If stack is empty or all items are traversed
    if (st.empty() || curr == n) {
        return;
    }

    // Remove the current top element
    int x = st.top();
    st.pop();

    // Recursively call for the next element
    deleteMiddle(st, n, curr + 1);

    // Push the current element back if it is not the middle
    if (curr != n / 2) {
        st.push(x);
    }
}

// Function to print the stack elements
void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;

    // Insert elements into the stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);

    // Calculate the size of the stack
    int n = st.size();

    // Delete the middle element
    deleteMiddle(st, n);

    // Print the remaining stack
    printStack(st);

    return 0;
}

