#include<iostream>
#include<queue>
using namespace std;

class Solution
{   
    private:
    void solve(queue<int>& q){
        if(q.empty()){
            return ;
        }
        int ele = q.front();
        q.pop();
        
        solve(q);
        q.push(ele);
    }
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        solve(q);
        return q;
    }
};