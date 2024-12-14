#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> stations(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> stations[i];
        }
        int first = stations[0] - 0;
        int last = (x - stations[stations.size() - 1]) * 2;
        int ans = first > last ? first : last;
        for (int i = 1; i < n; i++)
        {
            ans = max((stations[i] - stations[i - 1]), ans);
        }
        cout << ans << endl;
    }
    return 0;
}