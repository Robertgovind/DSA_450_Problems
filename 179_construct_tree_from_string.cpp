#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
void solve(Node *root, string str, int &index)
{
    if (index >= str.length())
        return;
    root = new Node(str[index]);

    if (index < str.length() && str.at(index) == '(')
    {
        index++;
        solve(root->left, str, index);
    }
    if (index < str.length() && str.at(index) == ')')
    {
        index++;
        return;
    }
    if (index < str.length() && str.at(index) == '(')
    {
        index++;
        solve(root->right, str, index);
    }
    if (index < str.length() && str.at(index))
    {
        index++;
        return;
    }
}

Node *strToTree(string str)
{
    Node *root = NULL;
    int index = 0;
    solve(root, str, index);
    return root;
}