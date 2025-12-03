// marks >= 90 'A' 
// 80-90 'B' 
// marks<80 'C'

#include <iostream>
using namespace std;
int main(){

    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks>=90){
        cout << "Grade A\n";
    } else if (marks >=80 && marks <90){
        cout << "Grade B\n";
    } else if (marks<80){
        cout << "Grade C\n";
    }

    return 0;
}