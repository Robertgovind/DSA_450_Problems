#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    bool isSafe(vector<string> board, int n, int row, int col)
    {
        // check horizonatal
        for (int i = 0; i < n; i++)
        {
            if (board[row][i] == 'Q')
                return false;
        }

        // check vertical
        for (int i = 0; i < n; i++)
        {
            if (board[i][col] == 'Q')
            {
                return false;
            }
        }

        // check left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        {
            if (board[i][j] == 'Q')
            {
                return false;
            }
        }

        // check right diagonal
        for (int i = row, j = col; i >= 0 & j >= 0; i--, j++)
        {
            if (board[i][j] == 'Q')
            {
                return false;
            }
        }
        return true;
    }
    void solve(vector<string> board, vector<vector<string>> &ans, int n, int row)
    {
        if (row == n)
        {
            ans.push_back(board);
            return;
        }
        for (int i = 0; i < n; i++)
        {
            if (isSafe(board, n, row, i))
            {
                board[row][i] = 'Q';
                solve(board, ans, n, row + 1);
                board[row][i] = '.';
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans;
        solve(board, ans, n, 0);
        return ans;
    }
};