#include <iostream>
using namespace std;

int main() {

    int n;
    bool isPrime = true; // Assume number is prime unless we find a divisor

    cout << "Enter a number to check Prime or Non Prime: ";
    cin >> n;

    // Prime numbers start from 2. Any number <= 1 is NOT prime.
    if (n <= 1) {
        cout << "Non Prime\n";
        return 0; // Exit early because no further checking is needed
    }

    // Optimized loop: check divisors only up to sqrt(n)
    // Instead of i <= n-1, we use i*i <= n because:
    // If n has a factor larger than sqrt(n), the other factor will be smaller.
    for (int i = 2; i * i <= n; i++) {

        // If n is divisible by i, it is NOT a prime number
        if (n % i == 0) {
            isPrime = false;
            break; // Break early as no need to check further
        }
    }

    // Final result based on isPrime flag
    if (isPrime) {
        cout << "Prime No\n";
    } else {
        cout << "Non Prime\n";
    }

    return 0;
}
