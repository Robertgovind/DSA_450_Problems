#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> permutation(n, 0);
        vector<int> values(n);
        for (int i = 0; i < n; i++)
        {
            values[i] = i + 1;
        }
        // fill positions with low values
        int index = 0;
        for (int i = k - 1; i < n; i += k)
        {
            permutation[i] = values[index++];
        }
        for (int i = 0; i < n; ++i)
        {
            if (permutation[i] == 0)
            {
                permutation[i] = values[index++];
            }
        }
        for (int x : permutation)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}
