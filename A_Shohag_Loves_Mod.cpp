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
    for (int i = 1; i <= n; i++)
        cout << i + (i - 1) << " ";
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