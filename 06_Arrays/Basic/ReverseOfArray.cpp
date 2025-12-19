#include <iostream>
using namespace std;

// Function: Reverse the array using two-pointer technique
// Why two pointers?
// → It swaps elements from start and end in O(n/2) time (efficient)

// Parameters:
// num[] : input array
// size  : total number of elements
void reverseArray(int num[], int size){
    int start = 0;
    int end = size -1;

    while(start < end){
        swap(num[start], num[end]);
        start ++;
        end --;
    }

}

int main(){
    int num[] = {4,2,7,8,1,2,5}; 
    int size = 7;

    reverseArray(num,size);

    for(int i=0; i<size; i++){
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}