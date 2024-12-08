#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    // Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int>> arr, int n, int m)
    {
        vector<int> temp;
        int firstRow = 0;
        int lastRow = n - 1;
        int firstColumn = 0;
        int lastColumn = m - 1;
        int count = 0;
        while (count < n * m)
        {
            // first row
            for (int i = firstColumn; i <= lastColumn && count < n * m; i++)
            {
                temp.push_back(arr[firstRow][i]);
                count++;
            }
            firstRow++;

            // last column
            for (int i = firstRow; i <= lastRow && count < n * m; i++)
            {
                temp.push_back(arr[i][lastColumn]);
                count++;
            }
            lastColumn--;

            // last row
            for (int i = lastColumn; i >= firstColumn && count < n * m; i--)
            {
                temp.push_back(arr[lastRow][i]);
                count++;
            }
            lastRow--;

            // first column
            for (int i = lastRow; i >= firstRow && count < n * m; i--)
            {
                temp.push_back(arr[i][firstColumn]);
                count++;
            }
            firstColumn++;
        }
        return temp;
    }
};