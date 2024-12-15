#include <iostream>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        string str;
        cin >> str;
        for (int i = str.size() - 1; i >= 0; i--)
        {
            if (str[i] == 'p')
            {
                cout << 'q';
            }
            else if (str[i] == 'q')
            {
                cout << 'p';
            }
            else
            {
                cout << 'w';
            }
        }
        cout << endl;
    }
    return 0;
}