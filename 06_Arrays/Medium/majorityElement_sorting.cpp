#include <iostream>
#include <vector>
#include <algorithm>   // REQUIRED for sort()

using namespace std;


/*
 Function: majorityElement_sorting
 Purpose : Finds the majority element in the array
 Approach: Sorting-based method

 Concept:
 - If an element appears more than n/2 times,
   it must occupy the middle position after sorting.

 Steps:
 1. Sort the array
 2. Traverse and count frequency of consecutive elements
 3. Return the element whose frequency exceeds n/2

 Time Complexity :
 - Sorting: O(n log n)
 - Traversal: O(n)
 - Overall: O(n log n)

 Space Complexity :
 - O(1) extra space (ignoring sorting internals)
*/
int majorityElement_sorting(vector<int> &nums){
    int n = nums.size();

    // Step 1: Sort the array
    sort(nums.begin(),nums.end());

    // Frequency counter for current element
    int freq = 1; 

    // Store current candidate for majority element
    int ans = nums[0];

    // Step 2: Traverse sorted array
    for(int i=1; i<n; i++){

        // If current element is same as previous, increase frequency
        if(nums[i] == nums[i-1]){
            freq++;
        }

        // Otherwise reset frequency and update candidate
        else{
            freq = 1;
            ans = nums[i];
        }

        // Step 3: Check majority condition
        if(freq > n/2){
            return ans;
        }
    }

    // Majority element is guaranteed to exist
    return ans;
}
int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << "Majority Element is: " << majorityElement_sorting(nums);

    return 0;
}