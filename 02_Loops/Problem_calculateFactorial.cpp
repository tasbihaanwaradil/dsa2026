#include <iostream>
using namespace std;

int main() {

    int n;            
    int fact = 1;     // Initialize factorial value to 1 

    cout << "Enter a number to find a factorial: ";
    cin >> n;

    // Factorial of 0 and 1 is always 1
    if (n == 0 || n == 1) {
        cout << "1";
    } 
    // Factorial for numbers greater than 1
    else if (n > 1) {

        // Multiply numbers from 2 to n
        for (int i = 2; i <= n; i++) {
            fact *= i;   // fact = fact * i
        }

        cout << "Factorial is: " << fact;
    }

    return 0;
} 
// Example: 4! = 4 × 3 × 2 × 1
