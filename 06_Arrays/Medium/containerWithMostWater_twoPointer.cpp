#include <iostream>
#include <vector>
using namespace std;

/*
 Problem: Container With Most Water
 Approach: Two Pointer Technique

 Key Idea:
 - Use two pointers starting from both ends
 - Area depends on the shorter height
 - Move the pointer with smaller height inward
   (because moving the taller one cannot increase area)

 Formula:
 area = min(height[left], height[right]) * (right - left)

 Time Complexity : O(n)
 Space Complexity: O(1)
*/
int maxArea_twopointer(vector<int> &height){

    int n = height.size();
    if(n < 2) return 0;   // Edge case

    int left = 0;        // Left pointer (index)
    int right = n - 1;   // Right pointer (index)

    int max_area = 0;    // Stores maximum area found

    while(left < right){

        // Height is limited by the shorter line
        int h = min(height[left], height[right]);

        // Width is distance between pointers
        int w = right - left;

        // Current container area
        int current_area = h * w;

        // Update maximum area
        max_area = max(max_area, current_area);

        // Move the pointer pointing to smaller height
        if(height[left] < height[right]){
            left++;
        } else {
            right--;
        }
    }

    return max_area;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << "Maximum Water: " << maxArea_twopointer(height);
    return 0;
}
