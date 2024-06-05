#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

class Solution
{
private:
    pair<bool, int> solve(Node *root)
    {
        if (root == NULL)
            return make_pair(true, 0);

        pair<bool, int> left = solve(root->left);
        pair<bool, int> right = solve(root->right);

        pair<bool, int> ans;
        ans.first = (abs(left.second - right.second) <= 1) && left.first && right.first;
        ans.second = 1 + max(left.second, right.second);

        return ans;
    }

public:
    bool isBalanced(Node *root)
    {
        return solve(root).first;
    }
};