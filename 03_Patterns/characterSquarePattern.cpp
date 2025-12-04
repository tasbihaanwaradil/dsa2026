#include <iostream>
using namespace std;

int main() {

    int n = 4;  // Number of rows and columns

    // Outer loop → controls rows
    for (int i = 0; i < n; i++) {

        char ch = 'A';   // Start each row with character 'A'

        // Inner loop → prints characters in a row
        for (int j = 0; j < n; j++) {

            cout << ch << " ";  // Print current character
            ch += 1;            // Move to next character (A → B → C → D)
        }

        cout << endl;  // Move to next line after each row
    }

    return 0;
}
