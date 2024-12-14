#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int testcase, n, k;
    cin >> testcase;
    for (int t = 0; t < testcase; t++)
    {
        cin >> n >> k;
        vector<long long int> nums(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        if (k > 1)
        {
            cout << "YES\n";
            continue;
        }
        else
        {
            bool isSorted = true;
            for (int i = 0; i < n - 1; i++)
            {
                if (nums[i] > nums[i + 1])
                {
                    isSorted = false;
                    break;
                }
            }
            if (isSorted)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}