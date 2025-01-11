#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    bool isValid(vector<vector<int>> &grid, int r, int c, int n, int expectedVal)
    {
        if (r < 0 || c < 0 || r >= n || c >= n || grid[r][c] != expectedVal)
        {
            return false;
        }
        if (expectedVal == n * n - 1)
        {
            return true;
        }
        // All 8 possible moves
        int ans1 = isValid(grid, r - 2, c + 1, n, expectedVal + 1);
        int ans2 = isValid(grid, r - 1, c + 2, n, expectedVal + 1);
        int ans3 = isValid(grid, r + 1, c + 2, n, expectedVal + 1);
        int ans4 = isValid(grid, r + 2, c + 1, n, expectedVal + 1);
        int ans5 = isValid(grid, r + 2, c - 1, n, expectedVal + 1);
        int ans6 = isValid(grid, r + 1, c - 2, n, expectedVal + 1);
        int ans7 = isValid(grid, r - 1, c - 2, n, expectedVal + 1);
        int ans8 = isValid(grid, r - 2, c - 2, n, expectedVal + 1);

        return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
    }

public:
    bool checkValidGrid(vector<vector<int>> &grid)
    {
        return isValid(grid, 0, 0, grid.size(), 0);
    }
};