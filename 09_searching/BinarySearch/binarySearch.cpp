#include <iostream>
#include <vector>
using namespace std;

/*
 Function: binarySearch
 Purpose : Searches for a target element in a sorted array
 Approach: Iterative Binary Search

 Key Idea:
 - Divide the search space into half at each step
 - Compare target with middle element
 - Discard the half where target cannot exist

 Requirement:
 - Array MUST be sorted

 Time Complexity : O(log n)
 Space Complexity: O(1)
*/
int binarySearch(vector<int> &arr, int target){
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end){

        // Using safe mid calculation to avoid integer overflow
        int mid = start + (end - start) / 2;

        // Target lies in right half
        if(target > arr[mid]){
            start = mid + 1;
        }
        // Target lies in left half
        else if(target < arr[mid]){
            end = mid - 1;
        }
        // Target found
        else{
            return mid;
        }
    }

    // Target not found
    return -1;
}

int main(){
    vector<int> arrOdd = {-1,0,3,4,5,9,12};   // odd length array
    int target1 = 12;

    vector<int> arrEven = {-1,0,3,5,9,12};   // even length array
    int target2 = 0;

    cout << "Index (Odd Array): " << binarySearch(arrOdd, target1) << endl;
    cout << "Index (Even Array): " << binarySearch(arrEven, target2) << endl;

    return 0;
}
