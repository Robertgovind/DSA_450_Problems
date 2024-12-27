#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve()
{
    // Logic
    int n;
    cin >> n;
    string str;
    cin >> str;
    vi freq(26, 0);
    for (int i = 0; i < n; i++)
    {
        freq[str[i] - 'a']++;
    }
    char maxChar = str[0], minChar = str[0];
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] >= freq[maxChar - 'a'])
            maxChar = 'a' + i;
        if (freq[25 - i] <= freq[minChar - 'a'] && freq[25 - i])
            minChar = 'a' + (25 - i);
    }

    for (int i = 0; i < n; i++)
    {
        if (str[i] == minChar)
        {
            str[i] = maxChar;
            break;
        }
    }
    cout << str << endl;
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