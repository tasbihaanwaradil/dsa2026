#include <iostream>
#include <vector>
using namespace std;

/*
 Function: majorityElement_bruteforce
 Purpose : Finds the majority element in the array
 Definition:
 - A majority element appears more than ⌊n/2⌋ times
 Approach: Brute-force using nested loops
 Time Complexity : O(n^2)
 Space Complexity: O(1)

 Explanation:
 - For each element, count its frequency by scanning the array
 - If any element occurs more than n/2 times, return it
*/
int majorityElement_bruteforce(vector<int> &nums){

    int n = nums.size();

    // Pick each element one by one
    for(int value: nums){
        int freq = 0;

        // Count frequency of the current element
        for(int element: nums){
            if(element == value){
                freq ++;
            }
        }

        // Check if current element is majority
        if (freq > n/2){
            return value;
        }
    }

    // Return -1 if no majority element exists
    return -1;
}

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};

    cout << "Majority Element is: " << majorityElement_bruteforce(nums);
    return 0;
}