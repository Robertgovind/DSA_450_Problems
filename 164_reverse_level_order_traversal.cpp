#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

vector<int> reverseLevelOrder(Node *root)
{
    stack<Node *> s;
    queue<Node *> q;
    vector<int> ans;
    if (root == NULL)
        return ans;

    q.push(root);
    while (!q.empty())
    {
        Node *frontNode = q.front();
        q.pop();
        s.push(frontNode);

        // Traverse from right to left

        if (frontNode->right)
            q.push(frontNode->right);
        if (frontNode->left)
            q.push(frontNode->left);
    }
    while (!s.empty())
    {
        ans.push_back(s.top()->data);
        s.pop();
    }
    return ans;
}