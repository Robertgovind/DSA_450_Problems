#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int temp[n];
        int index = 0;
        for(int i=0;i<n;i++){
            if(arr[i]>=0)
            temp[index++] = arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0)
            temp[index++] = arr[i];
        }
        for(int i=0;i<n;i++){
            arr[i]=temp[i];
        }
}

void moveNegatives(vector<int>& nums){
    int n = nums.size();
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(nums[e] < 0){
            e--;
        }
        if(nums[s] < 0){
            swap(nums[s++],nums[e--]);
        }
        else{
            s++;
        }
    }
}
int main(){
    vector<int> ans = {-2, 9,3,-1,5,-3,9,-6};
    moveNegatives(ans);
    for(int i: ans)
    cout<<i<<" ";
    return 0;
}