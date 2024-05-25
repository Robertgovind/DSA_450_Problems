#include <iostream>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

// Using Recursion
void postorderTrav(Node *root)
{
    if (root == NULL)
        return;

    postorderTrav(root->left);
    postorderTrav(root->right);
    cout << root->data << " ";
}

// Using Iteration

void postorder(Node *root)
{
    if (root == NULL)
        return;

    stack<Node *> s;
    stack<int> o;

    s.push(root);
    while (!s.empty())
    {
        Node *curr = s.top();
        s.pop();

        o.push(curr->data);
        if (curr->left)
            curr = curr->left;
        if (curr->right)
            curr = curr->right;
    }
    while (!o.empty())
    {
        cout << s.top() << " ";
        o.pop();
    }
}