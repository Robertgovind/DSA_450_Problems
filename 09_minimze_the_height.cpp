#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        sort(arr, arr + n);
        int maxi = arr[n - 1];
        int mini = arr[0];
        int res = maxi - mini;

        for (int i = 1; i < n; i++)
        {
            maxi = max(arr[i - 1] + k, arr[n - 1] - k);
            mini = min(arr[i - 1] - k, arr[0] + k);
            res = min(res, maxi - mini);
        }
        return res;
    }
};