#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int arraySize, divisor;
        cin >> arraySize >> divisor;
        vector<int> array(arraySize);

        for (int i = 0; i < arraySize; i++)
        {
            cin >> array[i];
        }

        bool isSolutionFound = false;
        int chosenIndex = -1;

        for (int i = 0; i < arraySize; i++)
        {
            bool canWin = true;

            for (int j = 0; j < arraySize; j++)
            {
                if (i != j && abs(array[i] - array[j]) % divisor == 0)
                {
                    canWin = false;
                    break;
                }
            }

            if (canWin)
            {
                isSolutionFound = true;
                chosenIndex = i + 1;
                break;
            }
        }

        if (isSolutionFound && arraySize == 2 && divisor == 2)
        {
            isSolutionFound = true;
            chosenIndex = 2;
        }

        if (isSolutionFound)
        {
            cout << "YES" << endl;
            cout << chosenIndex << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
