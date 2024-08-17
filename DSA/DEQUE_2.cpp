#include <iostream>
#include <deque>

using namespace std;

void print(deque<int> data) {
    if (!data.empty()) {
        cout << "The current deque is: ";
        while (!data.empty()) {
            cout << data.front() << " ";
            data.pop_front();
        }
        cout << endl;
    } else {
        cout << "The deque is empty." << endl;
    }
}

void swap(deque<int>& data) {
    int start = 0;
    int end = data.size() - 1;
    while (start < end) {
        std::swap(data[start], data[end]);
        start++;
        end--;
    }
}

int main() {
    deque<int> data;  // Create an empty deque

    // Uncomment these lines to test the print function with elements
    // data.push_back(1);
    // data.push_back(2);
    // data.push_back(3);

    print(data);  // This will now correctly print "The deque is empty."

    // Uncomment these lines to test the swap function with elements
    // data.push_back(10);
    // data.push_back(20);
    // data.push_back(30);

    swap(data);
    print(data);  // This will now correctly print the swapped elements

    return 0;
}

