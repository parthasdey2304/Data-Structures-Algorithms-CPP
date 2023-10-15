// Neon Number:
// A neon number is a number where the sum of the digits of its square is equal to the original number.

#include <iostream>

bool isNeonNumber(int num) {
    int square = num * num;
    int sum = 0;

    // Calculate the sum of digits of the square
    while (square > 0) {
        sum += square % 10;
        square /= 10;
    }

    return sum == num;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isNeonNumber(num))
        std::cout << num << " is a Neon number." << std::endl;
    else
        std::cout << num << " is not a Neon number." << std::endl;

    return 0;
}
