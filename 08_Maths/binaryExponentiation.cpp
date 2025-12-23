#include <iostream>
using namespace std;

/*
 Function: binaryExponentiation
 Purpose : Computes x raised to the power n (x^n)
 Approach: Binary Exponentiation (Iterative)

 Key Concepts:
 - Uses binary representation of exponent
 - Multiply result only when exponent is odd
 - Square base at each step
 - Reduce exponent by half each iteration

 Edge Cases Handled:
 - n == 0 → result is 1
 - x == 0 → result is 0
 - x == 1 → result is 1
 - x == -1 → depends on parity of n
 - n < 0 → invert base

 Time Complexity : O(log n)
 Space Complexity: O(1)
*/
double binaryExponentiation(double x, int n){

    // Handle base cases
    if(n == 0) return 1.0;
    if(x == 0) return 0.0;
    if(x == 1) return 1.0;
    if(x == -1 && n % 2 == 0) return 1.0;
    if(x == -1 && n % 2 != 0) return -1.0;

    // Use long long to safely handle INT_MIN
    long long binForm = n;

    // Handle negative exponent
    if(binForm < 0){
        x = 1 / x;
        binForm = -binForm;
    }

    double ans = 1.0;

    // Binary exponentiation loop
    while(binForm > 0){

        // If current bit is 1 (odd), multiply result
        if(binForm % 2 == 1){
            ans *= x;
        }

        // Square the base
        x *= x;

        // Move to next bit
        binForm /= 2;
    }

    return ans;
}

int main(){
    double x = 3;
    int n = 5;

    cout << binaryExponentiation(x, n);
    return 0;
}
