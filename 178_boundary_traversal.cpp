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
    void solveLeft(Node *root, vector<int> &ans)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->left == NULL && root->right == NULL)
        {
            return;
        }
        ans.push_back(root->data);
        if (root->left)
        {
            solveLeft(root->left, ans);
        }
        else
        {
            solveLeft(root->right, ans);
        }
    }
    void solveLeaf(Node *root, vector<int> &ans)
    {
        if (root == NULL)
            return;
        if (root->left == NULL && root->right == NULL)
        {
            ans.push_back(root->data);
            return;
        }
        solveLeaf(root->left, ans);
        solveLeaf(root->right, ans);
    }
    void solveRight(Node *root, vector<int> &ans)
    {
        if (root == NULL)
            return;
        if (root->left == NULL && root->right == NULL)
        {
            return;
        }
        if (root->right)
            solveRight(root->right, ans);
        else
            solveRight(root->left, ans);
        ans.push_back(root->data);
    }

public:
    vector<int> boundary(Node *root)
    {
        vector<int> ans;
        if (root == NULL)
            return ans;
        ans.push_back(root->data);
        solveLeft(root->left, ans);
        solveLeaf(root->left, ans);
        solveLeaf(root->right, ans);
        solveRight(root->right, ans);
        return ans;
    }
};