// create mirror of a tree from a given tree
#include <iostream>

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
// Approach #1
void mirrorify1(Node *root, Node *&mirror)
{
    if (root == NULL)
    {
        mirror = NULL;
        return;
    }

    mirror = new Node(root->data);
    mirrorify1(root->right, mirror->left);
    mirrorify1(root->left, mirror->right);
}

// Approach #2
Node *mirrorify(Node *root)
{
    if (root == NULL)
    {
        return root;
    }
    Node *temp = root->left;
    root->left = root->right;
    root->right = temp;

    if (root->left)
        mirrorify(root->left);
    if (root->right)
        mirrorify(root->right);

    return root;
}