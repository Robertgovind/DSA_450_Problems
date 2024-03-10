#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
    stack<long long int> s;
    s.push(-1);
    vector<long long int> ans(n);
    for(int i=n-1;i>=0;i--){
        long long int curr = arr[i];
        while(s.top() != -1 && s.top()<=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
    }
};