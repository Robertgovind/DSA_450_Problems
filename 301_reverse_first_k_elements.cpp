#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int K) {
        // add code here.
        stack<int> s;
        for(int i=0;i<K;i++){
            int ele = q.front();
            q.pop();
            s.push(ele);
        }
        
        while(!s.empty()){
            int ele = s.top();
            s.pop();
            q.push(ele);
        }
        
        int t = q.size()-K;
        while(t--){
            int ele = q.front();
            q.pop();
            q.push(ele);
        }
        return q;
    }
};