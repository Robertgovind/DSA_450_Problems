#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int *arr, int l, int r, int k) {
       sort(arr,arr+(r+1));
       return arr[k-1];
}
int kthLargest(int *arr, int l, int r, int k) {
       sort(arr,arr+(r+1));
       return arr[r-k];
}

int main(){
    int arr[]={7, 10, 4, 3, 20, 15};
    cout<<kthSmallest(arr,0,5,3)<<endl;
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
    return 0;
}