#include <iostream>
#include <set>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    // Take input array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Create set for unique element from 1 to n
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i]) != s.end()) // If arr element is present in the set
        {
            cout << arr[i] << " ";
            s.erase(arr[i]);
        }
        else
        {
            cout << *s.begin() << " ";
            s.erase(s.begin());
        }
    }
    cout << endl;
}

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        solve();
    }
    return 0;
}