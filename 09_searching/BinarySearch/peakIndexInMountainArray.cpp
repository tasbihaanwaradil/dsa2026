#include <iostream>
#include <vector>
using namespace std;

/*
 Problem: Peak Index in a Mountain Array
 Approach: Binary Search

 Key Idea:
 - A mountain array strictly increases, reaches a peak, then strictly decreases
 - At any index:
   • If arr[mid] is greater than both neighbors → it's the peak
   • If slope is increasing → peak lies on the right
   • If slope is decreasing → peak lies on the left

 Time Complexity : O(log n)
 Space Complexity: O(1)
*/
int peakIndexInMountainArray(vector<int> &arr)
{
    // Peak cannot be at index 0 or last index
    int start = 1;
    int end = arr.size() - 2;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // Check if mid is the peak
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }

        // If slope is increasing, move right
        else if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }

        // If slope is decreasing, move left
        else
        {
            end = mid - 1;
        }
    }

    // Peak always exists as per problem constraints
    return -1;
}

int main()
{
    vector<int> nums = {0, 3, 8, 9, 5, 2};

    cout << "Peak Index: " << peakIndexInMountainArray(nums);
    return 0;
}
