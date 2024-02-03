#include<iostream>
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