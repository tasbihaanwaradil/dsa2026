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

    int f = 10;
    int g = f--; //kam ohle, update bad me
    cout << g << endl; //10

    int h = 10;
    int i = --h;
    cout << i << endl; //9

    return 0;
}