#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        vector<int> arr(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++)
        {
            arr[nums[i]]++;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (arr[i] > 1)
                return i;
        }
        return -1;
    }
};