#include <iostream>
using namespace std;
#include <vector>
#include <climits>

// This function is the Brute Force Approach,  Time Complexity -> O(n^2).
void subarray_sum(int arr[], int size)
{
    int maxSum = 0;
    int n = size;
    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << maxSum;

    return;
}

// Kanade's Algorithm
//  Kanade's algorithm is a dynamic programming technique used to solve the maximum subarray problem efficiently.
//  time complexity -> O(n)  Space complexity -> O(1)
int kadane(int arr[], int size)
{
    int CS = 0, MS = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        CS += arr[i];
        MS = max(CS, MS);
        if (CS < 0)
        {
            CS = 0;
        }
    }
    return MS;
}

int main()
{
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr) / sizeof(arr[0]);

    // subarray_sum(arr, n);
    int ans = kadane(arr, n);
    cout << ans;

    return 0;
}