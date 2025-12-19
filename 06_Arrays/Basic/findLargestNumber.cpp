#include <iostream>
#include <climits>                  // Required for INT_MIN

// Function to find the largest number in an array
int findLargestNumber(int num[], int size){

    // INT_MIN = smallest possible integer value
    // Initialize largest_num to INT_MIN so ANY element in the array
    // will be larger and replace it.
    int largest_num = INT_MIN;
    
    for(int i=0; i<size; i++){
        if(num[i] > largest_num){      
            largest_num = num[i];   // Update largest_num whenever a bigger number is found
        }
    }
    return largest_num;
}
using namespace std;
int main(){

    int nums[6] = {5,15,22,1,-15,24};
    int size = 6;

    cout << "largest number: " << findLargestNumber(nums,size);
    return 0;
}