#include <iostream>
using namespace std;
int main(){

    int sum = 0;
    int n = 20;
    for(int i=1; i<=n; i= i+2){
        sum += i; 
    }

    cout << "sum of odd numbers from 1 to n is: " << sum;

    return 0; //1 3 5 7 9 11 13 15 17 19
}