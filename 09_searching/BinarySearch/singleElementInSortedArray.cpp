#include <iostream>
#include <vector>
using namespace std;

/*
 Problem: Single Element in a Sorted Array
 Approach: Binary Search

 Given:
 - Sorted array
 - Every element appears exactly twice except one element
 - Find the single element in O(log n) time

 Key Idea:
 - Before the single element, pairs start at even index
 - After the single element, pairs start at odd index
 - Use index parity (even / odd) to decide search direction

 Time Complexity : O(log n)
 Space Complexity: O(1)
*/
int singleNonDuplicate(vector<int>& arr){
    int st = 0;
    int n = arr.size();
    int end = n - 1;

    // If array has only one element
    if(n == 1){
        return arr[0];
    }

    while(st <= end){
        int mid = st + (end - st)/2;

        // Edge case: single element at index 0
        if(mid == 0 && arr[0] != arr[1]){
            return arr[mid];
        }

        // Edge case: single element at last index
        if (mid == n-1 && arr[n-1] != arr[n-2]){
            return arr[mid];
        }

        // If mid element is different from both neighbors,
        // then it is the single element
        if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid+1]){
            return arr[mid];
        }

        // If mid index is even
        if (mid % 2 == 0){
            // Expected pair starts at even index
            if(arr[mid - 1] == arr[mid]){
                end = mid - 1;
            } else{
                st = mid + 1;
            }
        } 
        // If mid index is odd
        else{
            if (arr[mid - 1] == arr[mid]){
                st = mid + 1;
            } else{
                end = mid - 1;
            }
        }
    }

    // Fallback return (problem guarantees a single element)
    return -1;
}

int main(){
    vector<int> arr = {1,1,2,3,3,4,4,8,8};

    cout << "Single element is: " << singleNonDuplicate(arr);
    return 0;
}
