#include <iostream>
#include <vector>
using namespace std;

/*
 Function: pairSum_optimal
 Purpose : Finds indices of two numbers whose sum equals the target
 Approach: Two Pointer Technique
 Requirement: Input array must be SORTED
 Time Complexity : O(n)
 Space Complexity: O(1)

 Key Idea:
 - Use two pointers, one at the start and one at the end
 - If sum is too large, move the right pointer left
 - If sum is too small, move the left pointer right
 - Stop when pointers cross
*/
vector <int> pairSum_optimal(vector<int> &nums, int target){
    vector<int> ans;

    // Initialize two pointers
    int start = 0;
    int end = nums.size()-1;
    
    // Continue until pointers cross
    while (start<end){
        int pair_sum = nums[start] + nums[end];

        // If sum is greater than target, decrease end pointer
        if(pair_sum > target){
            end --;
        }
        
        // If sum is smaller than target, increase start pointer
        else if(pair_sum < target){
            start ++;
        }
        
        // Target found
        else{ 
            ans.push_back(start);
            ans.push_back(end);

            // Return indices immediately
            return ans;   
        }
    }
    return ans;

}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 13;
    vector<int> result = pairSum_optimal(nums,target);

    if(!result.empty()){
        cout << "Indices: " << result[0] << ", " << result[1];
    }else{
        cout << "No pair found";
    }
    

    return 0;
}