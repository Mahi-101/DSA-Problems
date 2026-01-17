#include <iostream>
using namespace std;
#include <vector>

// A pair sum is a problem which return the pair in sorted array with the target sum.

// This the Brute Force Approach,  Time Complexity -> O(n^2).
vector<int> PairSum(vector<int> num, int target)
{
    vector<int> ans;
    int n = num.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] + num[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

// We have a optimize way to solve this problem using 2 pointer approach.  Time Complexity -> O(n).
vector<int> PairSum2(vector<int> num, int target)
{
    vector<int> ans;
    int n = num.size();
    int i = 0, j = n - 1;

    while (i < j)
    {
        int PS = num[i] + num[j];
        if (PS > target)
        {
            j--;
        }
        else if (PS < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> num = {2, 7, 11, 15};

    vector<int> ans = PairSum2(num, 18);

    for (int val : ans)
    {
        cout << num[val] << "\n";
    }

    return 0;
}