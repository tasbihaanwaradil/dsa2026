#include <iostream>
#include <vector>

using namespace std;

/*
 Function: majorityElement_moore
 Purpose : Finds the majority element in an array
 Approach: Boyer–Moore Voting Algorithm

 Key Idea:
 - A majority element appears more than n/2 times
 - We keep a candidate and a counter
 - Same element increases count, different element decreases it
 - When count becomes zero, we pick a new candidate

 Important:
 - This algorithm ASSUMES that a majority element exists

 Time Complexity : O(n)
 Space Complexity: O(1)
*/
int majorityElement_moore(vector<int> &nums){
    int n = nums.size();

    // Counter for current candidate
    int freq = 0;
    int ans = 0;

    for(int i=0; i<n; i++){

        // If counter becomes zero, choose new candidate
        if(freq == 0){
            ans = nums[i];
        }
        
        // Increase or decrease counter
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }

    // Final candidate is the majority element
    return ans;
}

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};

    cout << "Majority Element is: " << majorityElement_moore(nums);

    return 0;
}