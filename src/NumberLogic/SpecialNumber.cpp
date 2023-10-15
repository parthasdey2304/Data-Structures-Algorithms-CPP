// Special Number:
// A special number is a number that has at least one prime factor repeated at least twice.

#include <iostream>

bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0)
            return false;
    }

    return true;
}

bool hasRepeatedPrimeFactor(int num) {
    int count = 0;

    for (int i = 2; i <= num; ++i) {
        if (isPrime(i) && num % i == 0) {
            ++count;
            if (count >= 2)
                return true;
        }
    }

    return false;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (hasRepeatedPrimeFactor(num))
        std::cout << num << " is a Special number." << std::endl;
    else
        std::cout << num << " is not a Special number." << std::endl;

    return 0;
}
