#include <iostream>
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
    pair<int, int> solveDiameter(Node *root)
    {
        if (root == NULL)
        {
            pair<int, int> p = make_pair(0, 0);
            return p;
        }
        pair<int, int> left = solveDiameter(root->left);
        pair<int, int> right = solveDiameter(root->right);
        int leftAns = left.first;
        int rightAns = right.first;
        int bothAns = left.second + right.second + 1;
        pair<int, int> ans;
        ans.first = max(leftAns, max(rightAns, bothAns));
        ans.second = max(left.second, right.second) + 1;
        return ans;
    }

public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node *root)
    {
        return solveDiameter(root).first;
    }
};