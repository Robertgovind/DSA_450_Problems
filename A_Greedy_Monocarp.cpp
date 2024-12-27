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
    int n, k;
    cin >> n >> k;
    vi coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    int ans = 0, sum = 0;
    sort(coins.begin(), coins.end());
    for (int i = n - 1; i >= 0; i--)
    {
        sum += coins[i];
        if (sum <= k)
        {
            ans = k - sum;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
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