//QN 02 : Find max and min value in the given array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

pair<int, int> maxMIn(vector<int>& nums){
    pair<int, int> temp;
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>max)
        max=nums[i];
        if(nums[i]<min)
        min=nums[i];
    }
    temp.first=max;
    temp.second=min;
    return temp;
}

int main(){
    vector<int> arr={2,5,3,1,7,4};
    pair<int,int> ans=maxMIn(arr);
    cout<<"Max :"<<ans.first<<" Min :"<<ans.second<<endl;
    return 0;
}