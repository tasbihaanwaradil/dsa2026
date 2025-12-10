#include <iostream>
#include <climits>                  // Required for INT_MAX
using namespace std;

// Function to find the smallest number in an array
int findSmallestNumber(int num_array[], int size){

    // INT_MAX = largest possible integer value in C++
    // We initialize smallest_num to INT_MAX so that 
    // ANY number in the array will be smaller than it.
    int smallest_num = INT_MAX;

    for (int i=0; i<size; i++){
        if(num_array[i] < smallest_num){
            smallest_num = num_array[i];
        }
    }
    return smallest_num;
}
int main(){
    int nums[6] = {5,15,22,1,-15,24};
    int size = 6;

    cout << "smallest number: " << findSmallestNumber(nums,size);

    return 0;
}