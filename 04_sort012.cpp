#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sort012(int a[], int n) { 
    int s=0,e=n-1;
    while(s<=e){
        if(a[s]==0)
        s++;
        else if(a[e]==0)
        swap(a[s++],a[e--]);
        else
        e--;
    }
    e=n-1;
    while(s<=e){
        if(a[s]==1)
        s++;
        else if(a[e]==1)
        swap(a[s++],a[e--]);
        else
        e--;
    }
    }