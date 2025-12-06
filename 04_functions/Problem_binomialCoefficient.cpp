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

//calculate nCr binomial coefficient for n & r
int nCr(int n, int r){
    int fact_n = calculate_factorial(n);
    int fact_r = calculate_factorial(r);
    int fact_nmr = calculate_factorial(n-r);

    return fact_n/ (fact_r * fact_nmr);

}
int main(){
    int n = 8;
    int r = 2;
    
    cout << nCr(n,r);
    return 0;
}