#include <iostream>
#include <climits>
using namespace std;

class Solution
{
public:
    long long maxSubarraySum(int arr[], int n)
    {

        long long int currSum = 0;
        long long int maxSum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            currSum += arr[i];
            if (currSum > maxSum)
            {
                maxSum = currSum;
            }

            if (currSum < 0)
            {
                currSum = 0;
            }
        }
        return maxSum;
    }
};