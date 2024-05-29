#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

// Approach #1
class Solution
{
public:
    void solve(Node *root, map<int, int> &ans, int level)
    {
        if (root == NULL)
            return;

        ans[level] = root->data;
        solve(root->left, ans, level + 1);
        solve(root->right, ans, level + 1);
    }
    // Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        map<int, int> ans;
        vector<int> answer;
        if (root == NULL)
            return answer;
        solve(root, ans, 0);
        for (auto x : ans)
            answer.push_back(x.second);

        return answer;
    }
};

// Approach #2 (traverse tree from right to left)
void solve(Node *root, vector<int> &ans, int level)
{
    if (root == NULL)
        return;
    if (level == ans.size())
        ans.push_back(root->data);
    solve(root->right, ans, level + 1);
    solve(root->left, ans, level + 1);
}

vector<int> leftView(Node *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;

    solve(root, ans, 0);
    return ans;
}