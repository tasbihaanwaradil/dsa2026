#include <iostream>
using namespace std;

// Function to convert a decimal number to binary (mathematical method)
int decimal_to_binary(int decNum){
    // handle zero
    if(decNum ==0){
        return 0;
    }

    int binaryNum = 0;   // stores final binary number
    int placeValue = 1;  // represents 1, 10, 100, 1000... (binary positions)

    // Repeat until the decimal number becomes 0
    while(decNum > 0){
        int remainder = decNum % 2;  // remainder gives the binary digit (0 or 1)
        decNum /= 2;                 // divide number by 2 for next step

        binaryNum += remainder * placeValue; // add digit at correct binary position
        placeValue *= 10;                    // move to next place (×10 in decimal)
    }
    return binaryNum;
}

int main(){
    int n;

    cout << "Enter a decimal number: ";
    cin >> n;

    // Print the binary form of the number
    cout << "Binary: " << decimal_to_binary(n);
    return 0;
}
