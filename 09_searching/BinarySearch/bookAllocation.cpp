#include <iostream>
#include <vector>
using namespace std;

/*
    Helper function to check whether it is possible to allocate books
    such that no student gets more than maxAllowedPages.

    arr  -> array of pages in each book
    n    -> number of books
    m    -> number of students
*/
bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages)
{
    int students = 1;   // start with first student
    int pages = 0;      // pages allocated to current student

    // Traverse all books
    for (int i = 0; i < n; i++)   // O(n)
    {
        // If a single book has more pages than allowed, allocation is impossible
        if (arr[i] > maxAllowedPages)
        {
            return false;
        }

        // Allocate book to current student if possible
        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            // Allocate to next student
            students++;
            pages = arr[i];
        }
    }

    // If students required are within limit, allocation is valid
    return students > m ? false : true;
}

/*
    Main function to find the minimum possible value of the maximum pages
    assigned to any student.

    Time Complexity: O(N log N)
*/
int allocateBooks(vector<int> &arr, int n, int m)
{
    // If students are more than books, allocation is not possible
    if (m > n)
    {
        return -1;
    }

    // Calculate sum of all pages (upper bound)
    int sum = 0;
    for (int i = 0; i < n; i++)   // O(n)
    {
        sum += arr[i];
    }

    int ans = -1;
    int start = 0, end = sum;     // search space for answer

    // Binary search on answer
    while (start <= end)          // O(log N)
    {
        int mid = start + (end - start) / 2;

        if (isValid(arr, n, m, mid))
        {
            // Valid allocation found, try smaller maximum
            ans = mid;
            end = mid - 1;
        }
        else
        {
            // Increase allowed pages
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;

    cout << allocateBooks(arr, n, m);
    return 0;
}
