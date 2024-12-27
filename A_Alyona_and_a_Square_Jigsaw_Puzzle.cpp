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
    int n;
    cin >> n;
    vi arr(n);

    for (auto &i : arr)
        cin >> i;

    int j = 1, sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        while (j * j < sum)
            j += 2;
        if (sum == j * j)
        {
            ans += 1;
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