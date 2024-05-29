#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

int height(Node *root)
{
    if (root == NULL)
        return 0;

    return 1 + max(height(root->left), height(root->right));
}