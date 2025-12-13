#include <iostream>
using namespace std;

// Function to calculate the sum of all elements in an array
int sumOfArray(int nums[], int size){
    int sum = 0;                 // stores cumulative sum of elements
    for(int i=0; i<size;i++){
        sum += nums[i];
    }
    return sum;
}
int main(){
    int nums[5] = {1,2,3,4,5};
    int size = 5;

    int result = sumOfArray(nums,size);

    cout << "sum: " << result;
    return 0;
}