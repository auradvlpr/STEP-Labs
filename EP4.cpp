#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return reversed == original;
}

int main() {
    int maxPal = 0;
    int factorA = 0, factorB = 0;

    for (int i = 100; i <= 999; ++i) {
        for (int j = i; j <= 999; ++j) {
            int prod = i * j;
            if (prod > maxPal && isPalindrome(prod)) {
                maxPal = prod;
                factorA = i;
                factorB = j;
            }
        }
    }

    cout << "Largest palindrome made from the product of two 3-digit numbers:\n";
    cout << maxPal << " = " << factorA << " × " << factorB << "\n";
    return 0;
}
