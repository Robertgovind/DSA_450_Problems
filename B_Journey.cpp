#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        long long int n, a, b, c;
        cin >> n >> a >> b >> c;
        long long int ans = 0, count = 0;
        int index = 0;
        long long int arr[3] = {a, b, c};

        // logic
        long long int sum = arr[0] + arr[1] + arr[2];
        int noOfCycles = n / sum;
        count = noOfCycles * 3;
        ans = noOfCycles * sum;

        while (ans < n)
        {
            ans += arr[index++];
            count++;
            if (index == 3)
            {
                index = 0;
            }
        }
        cout << count << endl;
    }
    return 0;
}