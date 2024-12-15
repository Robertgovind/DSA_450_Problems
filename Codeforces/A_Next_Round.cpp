#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int s = 0, e = nums.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = 0;
    if (nums[0] < k)
        cout << ans << endl;
    while (s <= e)
    {
        if (nums[mid] > k)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << ans + 1 << endl;

    return 0;
}