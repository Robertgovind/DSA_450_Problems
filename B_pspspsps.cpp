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
        string str;
        cin >> str;
        vector<int> arr(n, -1);
        int curr = 1;
        for (int i = 0; i < n; i++)
        {
            if (str[i] != 'p' && i + 1 < n)
            {
                continue;
            }
            int j = i;
            while (j >= 0 && arr[j] == -1)
            {
                arr[j] = curr;
                curr++;
                j--;
            }
        }
        bool flag = true;
        long long int sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            sum += arr[i];
            if (str[i] != 's')
            {
                continue;
            }
            int l = n - 1;
            if (l * (l + 1) / 2 != sum)
            {
                flag = false;
            }
        }
        if (flag)
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