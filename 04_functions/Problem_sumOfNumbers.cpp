#include <iostream>
using namespace std;

// Function to calculate sum of numbers from 1 to n
int sum_of_numbers(int n){
    int sum = 0;
    int i = 1;
    while(i<=n){
        sum += i;
        i ++;
    }
    return sum;
}

int main(){

    // Calling function with argument 2
    cout << sum_of_numbers(4); 

    return 0;
}