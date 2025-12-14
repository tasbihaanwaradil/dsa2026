#include <iostream>
using namespace std;

/*
 Print all unique values in an array
 ----------------------------------
 - A value is unique if it appears only once.
 - Uses nested loops to compare each element with others.
 - Time Complexity: O(n²)
*/
void find_unique_val(int nums[], int size){
    for(int i=0; i<size; i++){
        bool isUnique = true;           // assume current element is unique

        for(int j=0; j<size; j++ ){

            if(i==j){
                continue;               // skip comparing element with itself
            }

            if(nums[i] == nums[j]){
                isUnique = false;       // duplicate found
                break;
            }

        }

        if(isUnique == true){
            cout << nums[i] << " ";
        }
    }
}

int main(){
    int nums[4] = {1, 2, 2, 3};
    int size = 4;

    find_unique_val(nums,size);

    
    return 0;
}