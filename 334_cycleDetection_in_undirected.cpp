// Undirected Graph
#include <bits/stdc++.h>
using namespace std;

// Using BFS
class Solution
{
public:
    bool isCyclic(int node, unordered_map<int, bool> &visited, unordered_map<int, int> &parent, vector<int> adj[])
    {
        visited[node] = true;
        parent[node] = -1;
        queue<int> q;
        q.push(node);

        while (!q.empty())
        {
            int front = q.front();
            q.pop();

            for (auto neighbour : adj[front])
            {
                if (visited[neighbour] && neighbour != parent[front])
                {
                    return true;
                }
                else if (!visited[neighbour])
                {
                    q.push(neighbour);
                    visited[neighbour] = true;
                    parent[neighbour] = front;
                }
            }
        }
        return false;
    }

    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[])
    {
        unordered_map<int, bool> visited;
        unordered_map<int, int> parent;

        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                bool ans = isCyclic(i, visited, parent, adj);
                if (ans)
                    return true;
            }
        }
        return false;
    }
};

// Using DFS
class Solution
{
public:
    bool isCyclic(int node, int parent, unordered_map<int, bool> &visited, vector<int> adj[])
    {
        visited[node] = 1;
        for (auto neighbour : adj[node])
        {
            if (!visited[neighbour])
            {
                bool cycleDetected = isCyclic(neighbour, node, visited, adj);
                if (cycleDetected)
                    return true;
            }
            else if (neighbour != parent)
            {
                return true;
            }
        }
        return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[])
    {
        unordered_map<int, bool> visited;
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                bool ans = isCyclic(i, -1, visited, adj);
                if (ans == 1)
                    return true;
            }
        }
        return false;
    }
};