#include <iostream>
#include <vector>

int linearSearch(const std::vector<int>& arr, int target) {
    int n = arr.size();

    for (int i = 0; i < n; ++i) {
        if (arr[i] == target)
            return i;  // Target found at index i
    }

    return -1;  // Target not found in the array
}

int main() {
    std::vector<int> arr = {10, 7, 23, 32, 5, 62, 52};

    int target = 23;
    int result = linearSearch(arr, target);

    if (result != -1)
        std::cout << "Target " << target << " found at index " << result << "\n";
    else
        std::cout << "Target " << target << " not found in the array\n";

    return 0;
}
