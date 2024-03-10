#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            int curr = arr[i];
            while(curr<=s.top()){
                s.pop();
            }
            ans[i]=s.top();
            s.push(curr);
        }
        return ans;
    } 
};