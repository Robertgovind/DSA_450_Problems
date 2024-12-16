#include <iostream>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int reaminingSeats = m * 2;
        int seated = 0;

        if (a <= m)
        {
            seated += a;
            reaminingSeats -= a;
        }
        else
        {
            seated += m;
            reaminingSeats -= m;
        }
        if (b <= m)
        {
            seated += b;
            reaminingSeats -= b;
        }
        else
        {
            seated += m;
            reaminingSeats -= m;
        }
        if (c <= reaminingSeats)
        {
            seated += c;
        }
        else
        {
            seated += reaminingSeats;
        }
        cout << seated << endl;
        // cout<< min(2*m,a+b+c)<<endl;
    }
    return 0;
}