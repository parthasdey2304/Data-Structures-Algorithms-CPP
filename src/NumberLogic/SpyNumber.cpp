// Spy Number:
// A spy number is a number where the sum of its digits is equal to the product of its digits.

#include <iostream>

bool isSpyNumber(int num) {
    int sumOfDigits = 0;
    int productOfDigits = 1;
    int originalNum = num;

    // Calculate the sum and product of digits
    while (num > 0) {
        int digit = num % 10;
        sumOfDigits += digit;
        productOfDigits *= digit;
        num /= 10;
    }

    return sumOfDigits == productOfDigits;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isSpyNumber(num))
        std::cout << num << " is a Spy number." << std::endl;
    else
        std::cout << num << " is not a Spy number." << std::endl;

    return 0;
}
