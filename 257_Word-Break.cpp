#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    void solve(vector<string> &dict, string &s, string &op, int idx, vector<string> &ans, string str)
    {
        if (idx >= s.length())
        {
            if (str == "")
            {
                ans.push_back(op);
            }
            return;
        }

        str += s[idx];

        if (find(dict.begin(), dict.end(), str) != dict.end())
        {
            string prevOp = op;
            op += (op.empty() ? "" : " ") + str;

            solve(dict, s, op, idx + 1, ans, "");

            op = prevOp;
        }

        solve(dict, s, op, idx + 1, ans, str);
    }

    vector<string> wordBreak(vector<string> &dict, string s)
    {
        // code here
        vector<string> ans;
        string str = "";
        string op = "";
        int idx = 0;
        solve(dict, s, op, idx, ans, str);
        return ans;
    }
};