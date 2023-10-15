// Selection Sort Implementation

#include <iostream>

// Function to perform selection sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        // Assume the minimum element is at index i
        int minIndex = i;

        // Find the minimum element in the remaining unsorted array
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        // Swap the found minimum element with the element at index i
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array before sorting: ";
    for (int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";

    std::cout << "\n";

    selectionSort(arr, n);

    std::cout << "Array after sorting: ";
    for (int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";

    return 0;
}
