#include <iostream>
#include <vector>
using namespace std;

// Linear Search Algorithm using vectors
// -------------------------------------
// - Loop over the vector using nums.size()
// - Compare each element with the target
// - Return index if found
// - Return -1 if target does not exist
int linearSearchAlgorithm(vector<int> &nums, int target){
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==target){
            return i;
        }
    }
    return -1; 
}


int main(){
    vector<int> nums = {10,30,20,60,90};
    int target = 60;

    int result = linearSearchAlgorithm(nums,target);

    if(result != -1){
        cout << "Target found at index: " << result << endl;
    }else{
        cout << "Target not found";
    }

    return 0;
}