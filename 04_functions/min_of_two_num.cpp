#include <iostream>
using namespace std;

// Parameters: variables written inside the function definition.
// They act as placeholders that receive values (arguments) when the function is called.
int min_of_two(int a, int b){   // a and b are PARAMETERS
    if(a<b){
        return a;
    } else{
        return b;
    }
}

int main(){

    // Arguments: the actual values passed to a function during the function call.
    // Here, 10 and 6 are ARGUMENTS that get copied into a and b.
    cout << "Minimun is: " << min_of_two(10,6) << endl; 
    
    return 0;
}