#include <iostream>
using namespace std;

// Function to print all prime numbers from 2 to n
void printPrime(int n){

    for(int i = 2; i <= n; i++){   // check every number from 2 to n
        bool isPrime = true;

        // check if 'i' is prime
        for(int j = 2; j < i; j++){
            if(i % j == 0){        // if divisible, not prime
                isPrime = false;
                break;
            }
        }

        // print if prime
        if(isPrime){
            cout << i << " ";
        }
    }
}

int main(){
    printPrime(20);
    return 0;
}
