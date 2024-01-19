#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Gives Time Limit Error(TLE)
bool doesContain(vector<vector<int>>& temp,vector<int> t){
    if(temp.size()==0)
    return false;
    for(auto i:temp){
        if(i==t)
        return true;
    }
    return false;
}
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> temp;
    if(nums.size()<3)
    return temp;
     for(int i=0;i<nums.size()-2;i++){
        for(int j=i+1;j<nums.size()-1;j++){
            for(int k=j+1;k<nums.size();k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> t;
                    t.push_back(nums[i]);
                    t.push_back(nums[j]);
                    t.push_back(nums[k]);
                    sort(t.begin(),t.end());
                    if(!doesContain(temp,t)){
                        temp.push_back(t);
                    }
                }
            }
        }
     }   
     return temp;
    }

int main(){
    vector<int> arr = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans=threeSum(arr);
    cout<<"First :"<<endl;
    for(auto i:ans){
        for(int j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    vector<int> arr2={0,1,1};
    ans=threeSum(arr2);
    cout<<"Second :"<<endl;
    for(auto i:ans){
        for(int j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
     vector<int> arr3={0,0,0};
    ans=threeSum(arr3);
    cout<<"Third :"<<endl;
    for(auto i:ans){
        for(int j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}