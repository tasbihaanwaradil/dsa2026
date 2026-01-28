#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/*
 Helper Function: isPossible
 Purpose:
 - Checks whether it is possible to paint all boards using at most `m` painters
 - Ensures that no painter paints more than `maxAllowedTime`

 Logic:
 - Assign boards sequentially to painters
 - If current painter exceeds maxAllowedTime, assign a new painter

 Time Complexity: O(n)
*/
bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime)
{
    int painters = 1;   // Start with first painter
    int time = 0;       // Time taken by current painter

    for (int i = 0; i < n; i++)
    {
        // If current painter can paint this board
        if (time + arr[i] <= maxAllowedTime)
        {
            time += arr[i];
        }
        else
        {
            // Assign next painter
            painters++;
            time = arr[i];
        }
    }

    // Check if painters used are within the limit
    return painters <= m;
}

/*
 Function: minTimeToPaint
 Problem : Painter’s Partition Problem
 Approach: Binary Search on Answer

 Key Idea:
 - Minimum time = maximum single board length
 - Maximum time = sum of all board lengths
 - Binary search on this range to find the minimum feasible time

 Time Complexity : O(n log n)
 Space Complexity: O(1)
*/
int minTimeToPaint(vector<int> &arr, int n, int m)
{
    int sum = 0;
    int maxValue = INT_MIN;

    // Calculate total work and max board length
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxValue = max(maxValue, arr[i]);
    }

    // Binary Search range: [maxValue, sum]
    int start = maxValue, end = sum;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // If possible with mid as max time, try smaller value
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            // Otherwise, increase allowed time
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    cout << minTimeToPaint(arr, n, m) << endl;
    return 0;
}
