#include <iostream>
using namespace std;
int main(){

    // The ASCII code for 'a' is 97 and for 'z' is 122, while the code for 'A' is 65 and for 'Z' is 90.

    char ch = 'A';

    if (ch>='A' && ch<='Z'){
        cout << "Uppercase Character\n"; 
    } else if (ch>='a' && ch<='z'){
        cout << "Lowercase Character\n";
    } else{
        cout << "Not an alphabet character\n";
    }

    return 0;
}