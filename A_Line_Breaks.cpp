#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n, m;
        cin >> n >> m;

        int ans = 0;
        int temp = m;
        vector<string> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i].length() <= temp)
            {
                ++ans;
                temp -= arr[i].length();
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}