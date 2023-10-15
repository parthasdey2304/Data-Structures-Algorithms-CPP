// Happy Number:
// A happy number is a number that, when you replace it by the sum of the squares
// of its digits and repeat the process, eventually reaches the number 1.

#include <iostream>
#include <unordered_set>

bool isHappyNumber(int num) {
    std::unordered_set<int> seen;

    while (num != 1 && seen.find(num) == seen.end()) {
        seen.insert(num);
        int sum = 0;

        // Calculate the sum of squares of digits
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }

        num = sum;
    }

    return num == 1;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isHappyNumber(num))
        std::cout << num << " is a Happy number." << std::endl;
    else
        std::cout << num << " is not a Happy number." << std::endl;

    return 0;
}
