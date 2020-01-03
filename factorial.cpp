/*
 * Factorial
 * By Sam Firnhaber
 */

#include <iostream>

int main() {
    unsigned int x, copy;
    std::cin >> x;
    copy = x;
    if (x == 0)
        std::cout << 1 << std::endl;
    else {
        while (copy > 1)
            x *= --copy;
        std::cout << x << std::endl;
    }
    return 0;
}