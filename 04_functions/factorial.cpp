#include <iostream>
using namespace std;

//function to calculate factorial
int calculate_factorial(int n){
    int fact = 1; // initialize factorial result

    // Factorial of 0 and 1 is always 1
    if (n==0 || n==1){
        return 1;
    }
    // For numbers greater than 1, multiply numbers from 2 to n
    else if(n>1){
        for(int i=2; i<=n; i++){
            fact *= i;
        }
        return fact;
        
    }
}

int main(){
    cout << calculate_factorial(5); 
    return 0;
}