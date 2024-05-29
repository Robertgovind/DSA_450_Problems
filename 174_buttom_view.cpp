#include <iostream>
#include <vector>
#include <map>
#include <queue>
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
public:
    vector<int> topView(Node *root)
    {
        map<int, int> topNode;
        vector<int> ans;
        queue<pair<Node *, int>> q;
        q.push(make_pair(root, 0));

        while (!q.empty())
        {
            pair<Node *, int> temp = q.front();
            q.pop();
            Node *frontNode = temp.first;
            int hd = temp.second;

            topNode[hd] = frontNode->data;
            if (frontNode->left)
                q.push(make_pair(frontNode->left, hd - 1));
            if (frontNode->right)
                q.push(make_pair(frontNode->right, hd + 1));
        }
        for (auto x : topNode)
            ans.push_back(x.second);

        return ans;
    }
};