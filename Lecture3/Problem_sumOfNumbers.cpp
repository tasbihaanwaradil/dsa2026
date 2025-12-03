#include <iostream>
using namespace std;
int main(){


    //Sum of numbers from 1 to n
    int n = 5;
    int sum = 0;  
    for(int i=1; i<=n; i++){
        sum += i; 
    }
    cout << sum;
    return 0;
}