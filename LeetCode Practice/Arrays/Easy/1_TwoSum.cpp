#include <iostream>
#include <vector>
using namespace std;


// Brute-force solution for LeetCode Problem 1: Two Sum
// Goal: Find indices of two numbers in 'nums' whose sum equals 'target'
void TwoSum(vector<int> &nums, int target){
    for(int i=0; i<nums.size(); i++){
        for(int j= i+1; j<nums.size(); j++){
            if(nums[i] + nums[j] == target){
                cout << "[" << i << ", " << j << "]" << endl;
                return;
            }
        }
    }
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 18;
    
    TwoSum(nums,target);
    return 0;
}

/*
Notes for understanding:
1. This is a brute-force solution: it checks every possible pair of numbers.
2. Time complexity: O(n^2) because of nested loops.
3. Space complexity: O(1), no extra storage used.
4. Stops after finding the first pair that sums to target.
5. Can be optimized using a hash map to reduce time complexity to O(n).
*/