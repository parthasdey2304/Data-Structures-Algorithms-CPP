// Perfect Number:
// A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself).

#include <iostream>

bool isPerfectNumber(int num) {
    if (num <= 1)
        return false;

    int sumOfDivisors = 1;  // Start with 1 as 1 is always a divisor

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0)
            sumOfDivisors += i;
    }

    return sumOfDivisors == num;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPerfectNumber(num))
        std::cout << num << " is a Perfect number." << std::endl;
    else
        std::cout << num << " is not a Perfect number." << std::endl;

    return 0;
}
