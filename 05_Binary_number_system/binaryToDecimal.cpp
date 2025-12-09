#include <iostream>
using namespace std;

// Function to convert a binary number (entered as integer) into decimal
int binaryToDecimal(int binaryNum){
    int ans = 0;
    int placeValue = 1;                     // represents powers of 2 → 2^0, 2^1, 2^2, ...

    while(binaryNum > 0){
        int remainder = binaryNum % 10;     // extract last binary digit (0 or 1)
        ans += (remainder * placeValue);    // add the digit multiplied by its corresponding power of 2

        binaryNum /= 10;                    // remove last digit from binary number
        placeValue *= 2;                    // move to next power of 2 (1 → 2 → 4 → 8)
    }

    return ans;
}

int main(){
    int n;
    cout << "Enter binary number: ";
    cin >> n;

    cout << binaryToDecimal(n);
    return 0;
}