#include <iostream>
using namespace std;
int main(){
    int n;

    cout << "Enter a number to check even or odd: ";
    cin >> n;

    if (n%2==0){
        cout << "Number is even\n";
    } else {
        cout <<"Number is Odd\n";
    }

    return 0;
}