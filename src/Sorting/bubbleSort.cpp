// Bubble Sort Implementation

#include <iostream>

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        // Last i elements are already in place, so we don't need to check them
        for (int j = 0; j < n - i - 1; ++j) {
            // Compare adjacent elements
            // If the current element is greater than its adjacent element, swap them
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array before sorting: ";
    for (int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";

    std::cout << "\n";

    bubbleSort(arr, n);

    std::cout << "Array after sorting: ";
    for (int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";

    return 0;
}
