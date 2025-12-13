#include <iostream>
#include <climits>
using namespace std;

// Function to swap the maximum and minimum elements of an array
void swapMinMax(int nums[], int size){
    int maxIndex = 0;
    int minIndex = 0;

    for(int i=0; i<size; i++){
        if(nums[i] > nums[maxIndex]){
            maxIndex = i;
        } 

        if(nums[i]<nums[minIndex]){
                minIndex = i;
            }
        
    }
    swap(nums[maxIndex], nums[minIndex]);
    
  

}
int main(){
    int nums[5]= {5, 2, 9, 1, 7};
    int size = 5;

    swapMinMax(nums,size);

    for(int i=0; i<size; i++){
        cout << nums[i] << " ";
    }

    return 0;
}