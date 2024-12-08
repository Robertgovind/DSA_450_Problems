#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> rotateImage(vector<vector<int>> dim)
    {
        int n = dim.size();
        vector<vector<int>> temp(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp[j][n - 1 - i] = dim[i][j];
            }
        }
        return temp;
    }
    void rotate(vector<vector<int>> &matrix)
    {
        vector<vector<int>> temp = rotateImage(matrix);
        matrix = temp;
    }
};