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
    string s;
    cin >> s;
    char a = s[0];
    char op = s[1];
    char b = s[2];

    if ((op == '<' && a < b) || (op == '=' && a == b) || (op == '>' && a > b))
    {
        cout << s << endl;
        return;
    }

    // Try fixing `op` first
    if (a < b)
    {
        cout << string(1, a) + "<" + string(1, b) << endl;
        return;
    }
    if (a == b)
    {
        cout << string(1, a) + "=" + string(1, b) << endl;
        return;
    }
    if (a > b)
    {
        cout << string(1, a) + ">" + string(1, b) << endl;
        return;
    }
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