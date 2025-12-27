#include <iostream>
#include <vector>
using namespace std;

/*
 Problem: Product of Array Except Self
 Approach: Brute Force

 Key Idea:
 - For each index i, multiply all elements except nums[i]
 - Use two nested loops
 - Avoid division to handle zero values safely

 Steps:
 1. Initialize result array with size n
 2. For each index i:
    - Multiply all elements except i
    - Store product in result[i]

 Time Complexity : O(n^2)
 Space Complexity: O(n)  (output array)
*/
vector<int> productExceptSelf_bruteforce(vector<int> nums){
    int n = nums.size();

    // Result array initialized with 1
    vector<int> ans(n, 1);

    // Outer loop selects index to exclude
    for(int i = 0; i < n; i++){
        int prod = 1;

        // Inner loop multiplies all elements except i
        for(int j = 0; j < n; j++){
            if(i != j){
                prod *= nums[j];
            }
        }

        // Store product for index i
        ans[i] = prod;
    }

    // Return final result
    return ans;
}

int main(){
    vector<int> nums = {1, 2, 3, 4};

    vector<int> result = productExceptSelf_bruteforce(nums);

    // Print result
    for(int val : result){
        cout << val << " ";
    }

    return 0;
}
