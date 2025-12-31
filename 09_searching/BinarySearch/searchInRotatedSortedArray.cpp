#include <iostream>
#include <vector>
using namespace std;

/*
 Problem: Search in Rotated Sorted Array
 Approach: Modified Binary Search

 Key Idea:
 - One half of the array is always sorted
 - Identify the sorted half
 - Decide whether the target lies in the sorted half
 - Reduce the search space accordingly

 Time Complexity : O(log n)
 Space Complexity: O(1)
*/
int searchInRotatedSortedArray(vector<int> &nums, int target){
    int start = 0;
    int end = nums.size() - 1;
    
    while(start <= end){
        // Overflow-safe mid calculation
        int mid = start + (end - start) / 2;

        // Target found
        if(nums[mid] == target){
            return mid;
        }

        // Left half is sorted
        if(nums[start] <= nums[mid]){
            // Target lies in left sorted half
            if(nums[start] <= target && target < nums[mid]){
                end = mid - 1;
            } 
            // Target lies in right half
            else{
                start = mid + 1;
            }
        } 
        // Right half is sorted
        else{
            // Target lies in right sorted half
            if(nums[mid] < target && target <= nums[end]){
                start = mid + 1;
            } 
            // Target lies in left half
            else{
                end = mid - 1;
            }
        }
    }

    // Target not found
    return -1;
}

int main(){
    vector<int> nums = {3,4,5,6,7,0,1,2};
    int target = 0;

    cout << "Index: " << searchInRotatedSortedArray(nums, target);
    return 0;
}
