#include <iostream>
#include <climits>          // For INT_MIN (minimum possible integer value)
#include <vector>           // For using vector container
using namespace std;

/*
 Function: maxSubarraySum
 Purpose : Finds the maximum sum of a contiguous subarray
 Approach: Brute-force using two nested loops
 Time Complexity : O(n^2)
 Space Complexity: O(1)
*/
void maxSubarraySum(vector<int> &nums){

    // Initialize max_sum with the smallest possible integer
    // This ensures correctness even if all numbers are negative
    int max_sum = INT_MIN;

    // Outer loop selects the starting index of the subarray
    for(int start=0; start<nums.size(); start++){

        int current_sum = 0;

        // Inner loop selects the ending index of the subarray
        for(int end=start; end<nums.size(); end++){

            // Add current element to the running sum
            current_sum += nums[end];

            // Update max_sum if current_sum is greater
            max_sum = max(current_sum,max_sum);  
        }
    }
    cout << "Maximum Subarray Sum is: " << max_sum;
}
int main(){
    vector<int> nums = {3,-4,5,4,-1,7,-8};

    maxSubarraySum(nums);
    return 0;
}