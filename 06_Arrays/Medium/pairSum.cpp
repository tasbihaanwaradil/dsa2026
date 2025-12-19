#include <iostream>
#include <vector>
using namespace std;

/*
 Function: pairSum
 Purpose : Finds indices of two numbers whose sum equals the target
 Approach: Brute-force using two nested loops
 Time Complexity : O(n^2)
 Space Complexity: O(1)  (excluding output vector)

 Explanation:
 - We check every possible pair (i, j)
 - j starts from i+1 to avoid using the same element twice
 - As soon as a valid pair is found, we return their indices
*/
vector<int> pairSum(vector<int> &nums, int target){

    // Vector to store result indices
    vector<int> ans;

    // Outer loop selects the first element
    for(int i=0; i<nums.size(); i++){

        // Inner loop selects the second element
        for(int j=i+1; j<nums.size(); j++){

            // Check if current pair sums to target
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);

                // Return immediately after finding the pair
                return ans;    
            }
        }   
    }
    
    // Return empty vector if no valid pair is found
    return ans;
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 13;

    // Call function to find the pair
    vector<int> result = pairSum(nums, target);

    // Check if a valid pair exists
    if(!result.empty()){
        cout << "Indices: " << result[0] << ", " << result[1];
    }else{
        cout << "No Pair Found";
    }

    return 0;
}