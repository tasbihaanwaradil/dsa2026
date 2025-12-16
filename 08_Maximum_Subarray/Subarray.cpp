#include <iostream>
#include <vector>
using namespace std;

// Function to print all possible subarrays of an array
// Time Complexity: O(n^3)
// Space Complexity: O(1)

void printSubarrays(vector<int> &nums){

    // Start index of subarray
    for(int start=0; start<nums.size(); start++){   

        // End index of subarray        
        for(int end=start; end<nums.size(); end++){

            // Print elements from start to end
            for(int i=start; i<=end; i++){
                cout << nums[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    printSubarrays(nums);

    return 0;
}