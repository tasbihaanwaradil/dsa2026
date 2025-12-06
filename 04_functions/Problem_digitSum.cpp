#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a number
int digit_sum(int num){
    int digitSum = 0;

    // Loop until all digits are processed
    while(num>0){
        int last_digit = num % 10; // Extract the last digit
        num /= 10;                 // Remove the last digit from the number

        digitSum += last_digit;    // Add the extracted digit to the sum
    }

    return digitSum;
}
int main(){

    cout << digit_sum(987);


    return 0;
}