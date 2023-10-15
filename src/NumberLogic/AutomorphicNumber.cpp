// Automorphic Number:
// An automorphic number is a number that remains the same when
// its square is calculated and its rightmost digits are considered.

#include <iostream>
#include <cmath>

bool isAutomorphic(int num) {
    int square = num * num;
    
    // Compare the last digits of num and square
    while (num != 0) {
        if (num % 10 != square % 10)
            return false;
        
        num /= 10;
        square /= 10;
    }
    
    return true;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isAutomorphic(num))
        std::cout << num << " is an Automorphic number." << std::endl;
    else
        std::cout << num << " is not an Automorphic number." << std::endl;

    return 0;
}
