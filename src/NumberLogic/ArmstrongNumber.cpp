// Armstrong Number:
// An Armstrong number (or narcissistic number) is an integer
// that is equal to the sum of its own digits each raised to the power
// of the number of digits.

#include <iostream>
#include <cmath>

bool isArmstrong(int num) {
    int originalNum = num;
    int numDigits = 0;
    int sum = 0;

    // Count the number of digits
    while (num != 0) {
        num /= 10;
        ++numDigits;
    }

    num = originalNum;  // Reset num to the original value

    // Calculate the sum of digits raised to the power of the number of digits
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    // Check if it's an Armstrong number
    return sum == originalNum;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isArmstrong(num))
        std::cout << num << " is an Armstrong number." << std::endl;
    else
        std::cout << num << " is not an Armstrong number." << std::endl;

    return 0;
}
