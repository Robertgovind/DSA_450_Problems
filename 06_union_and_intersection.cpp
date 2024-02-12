#include<bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
        //code here
        sort(a,a+n);
        sort(b,b+m);
        int firstIndex = 0;
        int secondIndex = 0;
        int count = 0;
        while(firstIndex<n && secondIndex<m){
            if(a[firstIndex] == b[secondIndex]){
                firstIndex++;
                secondIndex++;
            }
            else if(a[firstIndex]<b[secondIndex]){
                firstIndex++;
                count++;
            }
            else if(a[firstIndex]>b[secondIndex]){
                secondIndex++;
                count++;
            }
        }
        while(firstIndex<n){
            count++;
            firstIndex++;
        }
        while(secondIndex<m){
            count++;
            secondIndex++;
        }
    return count;
}

int main(){
    int arr1[]={85, 25, 1, 32, 54, 6};
    int arr2[]={85, 2 };
    cout<<doUnion(arr1,6,arr2,4);
    return 0;
}