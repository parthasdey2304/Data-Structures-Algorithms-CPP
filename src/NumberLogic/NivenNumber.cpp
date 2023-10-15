// Niven Number:
// A Niven number (or Harshad number) is an integer that is divisible by the sum of its digits.

#include <iostream>

bool isNivenNumber(int num) {
    int sumOfDigits = 0;
    int originalNum = num;

    // Calculate the sum of digits
    while (num > 0) {
        sumOfDigits += num % 10;
        num /= 10;
    }

    return originalNum % sumOfDigits == 0;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isNivenNumber(num))
        std::cout << num << " is a Niven number." << std::endl;
    else
        std::cout << num << " is not a Niven number." << std::endl;

    return 0;
}
