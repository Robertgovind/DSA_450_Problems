#include <iostream>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;

    int passengers = 0; // Number of passengers at the stop

    while (testcases--)
    {
        string ch;
        int s;
        cin >> ch >> s;

        if (ch[0] == 'P')
        {
            passengers += s;
        }
        else
        {
            int seats = s;
            if (seats >= passengers + 1)
            {
                cout << "YES" << endl;
                passengers = 0;
            }
            else
            {
                cout << "NO" << endl;
                passengers = max(0, passengers - seats);
            }
        }
    }

    return 0;
}
