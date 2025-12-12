#include <iostream>
#include <vector>
using namespace std;

/*
  Function: singleNumber
  -----------------------
  - Uses XOR logic to find the element that appears only once.
  - XOR properties used:
        a ^ a = 0        (duplicates cancel out)
        a ^ 0 = a        (identity)
  - Time Complexity: O(n)
  - Space Complexity: O(1)
*/
int singleNumber(vector<int> &nums){
    int ans = 0;

    // XOR all elements; duplicates vanish, single number remains
    for(int val: nums){
        ans ^= val;
    }
    return ans;

}

int main(){

    vector<int> nums = {2,2,1};

    cout << "Single number is: " << singleNumber(nums) << endl;
    return 0;
}