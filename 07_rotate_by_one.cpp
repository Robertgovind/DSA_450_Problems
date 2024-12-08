#include <bits/stdc++.h>
void rotate(int arr[], int n)
{
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[(i + 1) % n] = arr[i];
    }
    // Transfering the values to reference variable
    for (int i = 0; i < n; i++)
    {
        arr[i] = a[i];
    }
}