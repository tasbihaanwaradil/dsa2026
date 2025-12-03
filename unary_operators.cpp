//Unary Operators 
#include <iostream>
using namespace std;
int main(){

    // Increment ++
    //a++ kam phle, update bad me
    //++a update phle, kam bad me

    int a = 10;
    int b = a++;

    cout << b << endl; //10
    cout << a << endl; //11

    int d = 20;
    cout << d << endl;

    int e = ++d; //update phle, kam bad me
    cout << e << endl; //21
   

    return 0;
}