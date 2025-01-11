#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve()
{
    // Your logic here
    int k;
    cin >> k;
    vi nums(k);
    for (int i = 0; i < k; i++)
        cin >> nums[i];
    int count = 0;
    sort(nums.begin(), nums.end());
    int s = 0, e = nums.size() - 1;
    int target = k - 2;
    while (s < e)
    {
        int start = nums[s], end = nums[e];
        if ((target % start == 0) && (target % end == 0) && (target == start * end))
        {
            cout << start << " " << end;
            break;
        }
        if (start * end > target)
            e--;
        else
            s++;
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}