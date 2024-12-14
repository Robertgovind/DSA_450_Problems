#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0, ans = 0;
    vector<vector<int>> questions(n, vector<int>(3, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> questions[i][j];
            if (questions[i][j])
                count++;
            if (count >= 2)
            {
                ans++;
                count = 0;
            }
        }
        count = 0;
    }
    cout << ans << endl;

    return 0;
}