#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Give Time Limit Error(TLE)
int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int ans=arr[0];
        for(int j=0;j<k;j++){
            int min=INT_MAX;
            int idx=-1;
        for(int i=l;i<=r;i++){
            if(arr[i]<min){
                min=arr[i];
                idx=i;
            }
        }
        arr[idx]=INT_MAX;
        ans=min;
        min=INT_MAX;
        }
        return ans;
    }
int main(){
    int arr[]={7, 10, 4, 3, 20, 15};
    cout<<kthSmallest(arr,0,5,3);
    return 0;
}