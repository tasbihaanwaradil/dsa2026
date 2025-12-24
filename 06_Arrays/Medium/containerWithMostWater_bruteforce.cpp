#include <iostream>
#include <vector>
using namespace std;

/*
 Problem: Container With Most Water
 Approach: Brute Force

 Key Idea:
 - Try all possible pairs of lines
 - Calculate area formed by each pair
 - Keep track of the maximum area

 Formula:
 area = min(height[i], height[j]) * (j - i)

 Time Complexity : O(n^2)
 Space Complexity: O(1)
*/
int maxArea_bruteforce(vector<int> &height){
    int n = height.size();
    int max_area = 0;

    // Pick first line
    for(int i=0; i<n; i++){

        // Pick second line
        for(int j=i+1; j<n; j++){
            
            // Height is limited by shorter line
            int h = min(height[i], height[j]);

            // Width is distance between lines
            int w = j-i;

            //calculate area
            int area = h * w;

            //update maximum area
            max_area = max(max_area, area);
        }
    }

    return max_area;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << "Maximum Water: " << maxArea_bruteforce(height);

    return 0;
}