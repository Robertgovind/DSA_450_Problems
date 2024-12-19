#include <iostream>
using namespace std;

bool canUnlock(int x)
{
    while (x > 0)
    {
        if (x % 100 == 33)
        {
            x /= 100;
        }
        else if (x >= 33)
        {
            x -= 33;
        }
        else
        {
            return false;
        }
    }
    return x == 0;
}

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int num;
        cin >> num;

        if (canUnlock(num))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
