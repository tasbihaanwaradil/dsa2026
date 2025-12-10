#include <iostream>
using namespace std;

/*
 Linear Search Algorithm
 -----------------------
 - Searches for a target value in an array.
 - Time Complexity: O(n)
 - Returns index of the target if found.
 - Returns -1 if the target is not in the array.
*/
int linear_search_algorithm(int arr[], int size, int target_element){
    for(int i=0; i<size; i++){
        if(target_element == arr[i]){
            return i;
        }
    }
    return -1; 
}

int main(){

    int arr[7] = {4,2,7,8,1,2,5};
    int size = 7;
    int target = 8;

    int result = linear_search_algorithm(arr, size, target);

    if(result != -1){
        cout << "Target found at index: " << result;
    } else{
        cout << "Target not found in the array.";
    }

    return 0;
}