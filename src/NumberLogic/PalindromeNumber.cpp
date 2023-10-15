// Palindrome Number:
// A palindrome number is a number that remains the same when its digits are reversed.

#include <iostream>

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    // Reverse the number
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPalindrome(num))
        std::cout << num << " is a Palindrome number." << std::endl;
    else
        std::cout << num << " is not a Palindrome number." << std::endl;

    return 0;
}
