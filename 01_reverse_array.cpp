//QN 01 : Reverse an array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n){
    int s=0,e=n-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    reverseArray(arr,5);
    for(int i:arr)
    cout<<i<<" ";
    return 0;
}