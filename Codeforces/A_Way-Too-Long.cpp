#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> arr(n);

    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Solution
    for (int i = 0; i < n; i++)
    {
        if (arr[i].length() >= 10)
        {
            arr[i] = arr[i][0] + to_string(arr[i].length() - 2) + arr[i].back();
        }
    }

    // Output
    for (const auto &str : arr)
    {
        cout << str << endl;
    }

    return 0;
}
