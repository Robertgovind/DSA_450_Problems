#include <iostream>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;

    int maxDominoes = (M * N) / 2;

    // Output the result
    cout << maxDominoes << endl;

    return 0;
}
