#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> ops(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ops[i];
        if ((ops[i][0] == '+' && ops[i][1] == '+') || (ops[i][2] == '+' && ops[i][1] == '+'))
        {
            ans++;
        }
        else
        {
            ans--;
        }
    }
    cout << ans << endl;

    return 0;
}