#include <iostream>
#include <climits>      // For INT_MIN
#include <vector>       // For vector container
using namespace std;

/*
 Function: kadaneAlgorithm
 Purpose : Finds the maximum sum of a contiguous subarray
 Approach: Kadane’s Algorithm (Optimized version)
 Time Complexity : O(n)
 Space Complexity: O(1)

 Key Idea:
 - If the current subarray sum becomes negative, it cannot help
   any future subarray, so we reset it to 0.
*/
void maxSubarraySumKadane(vector<int> &nums){

    // Stores the maximum subarray sum found so far
    // Initialized to INT_MIN to handle all-negative array
    int max_sum = INT_MIN;

    // Stores sum of the current subarray
    int current_sum = 0;

    // Traverse the array once
    for(int i=0; i<nums.size(); i++){

        // Add current element to the running sum
        current_sum += nums[i];

        // Update maximum sum if current_sum is greater
        max_sum = max(current_sum,max_sum);

        // If current_sum becomes negative, reset it
        // Negative sum will reduce future subarray sums
        if(current_sum < 0){
            current_sum = 0;
        }
    }

    cout << "Maximum Subarray Sum (Kadane's Algorithm):  " << max_sum;

}
int main(){
    vector<int> nums = {3,-4,5,4,-1,7,-8};

    maxSubarraySumKadane(nums);
    return 0;
}
