#include <iostream>
using namespace std;
int main(){

    int n = 10;
    int sum = 0;

    // Numbers divisible by 3 from 1 to 10 
    // Sequence: 1 2 3 4 5 6 7 8 9 10
    // Divisible: 3, 6, 9 --> Sum = 18

    for(int i=1; i<=n; i++){
        if(i%3==0){
            sum += i; // 0+3 -> 3+6 -> 9+9 = 18
        }
    }

    cout << "sum: " << sum; //18

    return 0;
}