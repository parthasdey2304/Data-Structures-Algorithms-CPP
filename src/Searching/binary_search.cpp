#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is at the middle
        if (arr[mid] == target)
            return mid;

        // If the target is greater, ignore the left half
        if (arr[mid] < target)
            left = mid + 1;
        // If the target is smaller, ignore the right half
        else
            right = mid - 1;
    }

    return -1;  // Target not found in the array
}

int main() {
    std::vector<int> arr = {5, 12, 17, 23, 38, 45, 56, 72, 91};

    int target = 38;
    int result = binarySearch(arr, target);

    if (result != -1)
        std::cout << "Target " << target << " found at index " << result << "\n";
    else
        std::cout << "Target " << target << " not found in the array\n";

    return 0;
}
