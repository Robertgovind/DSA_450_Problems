#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n;
        cin >> n;
        vector<int> nonZero;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x)
                nonZero.push_back(i);
        }
        if (nonZero.size() == 0)
            cout << 0 << endl;
        else if (nonZero.back() - nonZero.front() == nonZero.size() - 1)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}