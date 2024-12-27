#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// finding kth largest element using quick select in TC O(n)
// worst calse : TC - O(n2)

// class Solution {
// public:
//     int quickSelect(vector<int> &nums, int l, int r, int k) {
//         int pivot = nums[r];
//         int p = l;
//         for (int i = l; i < r; i++) {
//             if (nums[i] <= pivot) {
//                 swap(nums[i], nums[p]);
//                 p++;
//             }
//         }
//         swap(nums[p], nums[r]);

//         if (p > k) {
//             return quickSelect(nums, l, p - 1, k);
//         } else if (p < k) {
//             return quickSelect(nums, p + 1, r, k);
//         } else {
//             return nums[p];
//         }
//     }

//     int findKthLargest(vector<int>& nums, int k) {
//         // Convert kth largest to index in sorted order
//         return quickSelect(nums, 0, nums.size() - 1, nums.size() - k);
//     }
// };

int kthSmallest(int *arr, int l, int r, int k)
{
       sort(arr, arr + (r + 1));
       return arr[k - 1];
}
int kthLargest(int *arr, int l, int r, int k)
{
       sort(arr, arr + (r + 1));
       return arr[r - k];
}

int main()
{
       int arr[] = {7, 10, 4, 3, 20, 15};
       cout << kthSmallest(arr, 0, 5, 3) << endl;
       for (int i = 0; i < 6; i++)
              cout << arr[i] << " ";
       return 0;
}