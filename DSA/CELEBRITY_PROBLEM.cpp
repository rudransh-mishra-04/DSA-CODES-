#include <iostream>
#include <vector>
using namespace std;
// Mock implementation of the knows API
bool knows(int a, int b);
// Function to find the celebrity
int findCelebrity(int n) {
    int candidate = 0;
    // Step 1: Find a potential candidate for celebrity
    for (int i = 1; i < n; i++) {
        if (knows(candidate, i)) {
            candidate = i; // candidate cannot be a celebrity
        }
    }
    // Step 2: Verify the candidate
    for (int i = 0; i < n; i++) {
        if (i != candidate && (knows(candidate, i) || !knows(i, candidate))) {
            return -1; // No celebrity found
        }
    }
    return candidate; // Celebrity found
}
// Mock implementation of the knows API for demonstration
bool knows(int a, int b) {
    vector<vector<bool>> matrix = {
        {false, true, true, false},
        {false, false, true, false},
        {false, false, false, false},
        {false, true, true, false}
    };
    return matrix[a][b];
}
int main() {
    int n = 4;
    int celebrity = findCelebrity(n);
    if (celebrity == -1) {
        cout << "There is no celebrity in the group." << endl;
    } else {
        cout << "The celebrity is person " << celebrity << "." << endl;
    }
    return 0;
}

