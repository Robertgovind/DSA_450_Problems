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
    vi colors(n), freq(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> colors[i];
        freq[colors[i]]++;
    }

    int ans = 0, count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (freq[i] > 1)
            ans++;
        if (freq[i] == 1)
            count++;
    }
    ans += (count + 1) / 2 * 2;
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