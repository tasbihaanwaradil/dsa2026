#include <iostream>
using namespace std;

// Function to check if a number is prime
int checkPrime(int n){
    bool isPrime = true;

    // Numbers less than or equal to 1 are not prime
    if(n<=1){
        return 0;
    } 

    // Check divisibility from 2 to n-1
    for(int i=2; i<n; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }

    // Return 1 if prime, 0 otherwise
    if(isPrime==true){
        return 1;
    } else{
        return 0;
    }
  
}
int main(){

    int n = 0;
    cout << checkPrime(n);

    return 0;
}

