#include <iostream>

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the target element is not found
}

int main() {
    int arr[] = {3, 5, 2, 4, 9, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        std::cout << "Element " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array" << std::endl;
    }

    return 0;
}

