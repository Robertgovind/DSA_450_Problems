#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n;
        cin >> n;
        vector<int> m(n);
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        vector<int> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        // solution
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (m[i] > s[i + 1])
            {
                ans += (m[i] - s[i + 1]);
            }
        }
        ans += m[n - 1];
        cout << ans << endl;
    }
    return 0;
}