#include<bits/stdc++.h>
using namespace std;
class Solution
{
    private:
    
vector<int> nextSmaller(long long int *arr, int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()]>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}


vector<int> prevSmaller(long long int *arr, int n){
    stack<long long int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()]>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long heights[], int n)
    {
        // Your code here
        
    vector<int> next(n);
    next = nextSmaller(heights,n);

    vector<int> prev(n);
    prev = prevSmaller(heights,n);

    long long int area = -1;
    for(int i=0;i<n;i++){
        long long int l =heights[i];
        if(next[i] == -1){
            next[i] = n;
        }
        long long int b = next[i]-prev[i]-1;
        long long int newArea=l*b;
        area = max(area,newArea);
    }
    return area;
    }
};