// Magic Number:
// A magic number is a number that produces a specific, consistent result
// when a given algorithm is applied to it.

#include <iostream>

bool isMagicNumber(int num) {
    int sum = 0;

    // Calculate the sum of digits
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    // Check if the sum is a single-digit number and equal to 1
    return sum == 1 || (sum < 10 && sum % 9 == 0);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isMagicNumber(num))
        std::cout << num << " is a Magic number." << std::endl;
    else
        std::cout << num << " is not a Magic number." << std::endl;

    return 0;
}
