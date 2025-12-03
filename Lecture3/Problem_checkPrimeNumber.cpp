#include <iostream>
using namespace std;
int main(){

    //check if a number is prime or non prime
    int n;
    bool isPrime = true;

    cout << "Enter a number to check Prime or Non Prime: ";
    cin >> n;

    if (n<=1){
        cout << "Number is non Prime\n";
        return 0;
    }

    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            isPrime = false;
            break;    
        }
    }

    if(isPrime == true){
        cout << "Number is Prime\n";
    } else{
        cout << "Number is Non Prime\n";
    }

    return 0;
}