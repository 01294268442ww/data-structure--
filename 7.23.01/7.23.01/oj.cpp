#include<iostream>
using namespace std;
//
//int search(int* nums, int numsSize, int target) {
//    int mid = numsSize / 2;
//    int left = 0;
//    int right = mid - 1;
//    while (left < right)
//    {
//        int leftMid = (left + right) / 2;
//        if (nums[leftMid] < target)
//        {
//            left = leftMid + 1;
//        }
//        else if (nums[leftMid] > target)
//        {
//            right = leftMid - 1;
//        }
//        else
//        {
//            return leftMid;
//        }
//    }
//
//    left = mid;
//    right = numsSize - 1;
//    while (left < right)
//    {
//        int rightMid = (left + right) / 2;
//        if (nums[rightMid] < target)
//        {
//            left = rightMid + 1;
//        }
//        else if (nums[rightMid] > target)
//        {
//            right = rightMid - 1;
//        }
//        else
//        {
//            return rightMid;
//        }
//    }
//    return -1;
//}
//
//int main()
//{
//    int arr[] = { 4,5,6,7,0,1,2 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    cout << search(arr, sz, 0) << endl;
//    return 0;
//}

//
//class Solution {
//public:
//    int search(vector<int>& nums, int target) 
//    {
//        int n = (int)nums.size();
//        if (!n) 
//        {
//            return -1;
//        }
//        if (n == 1) 
//        {
//            return nums[0] == target ? 0 : -1;
//        }
//        int l = 0, r = n - 1;
//        while (l <= r) 
//        {
//            int mid = (l + r) / 2;
//            if (nums[mid] == target) return mid;
//
//            if (nums[0] <= nums[mid]) 
//            {
//                if (nums[0] <= target && target < nums[mid]) 
//                {
//                    r = mid - 1;
//                }
//                else 
//                {
//                    l = mid + 1;
//                }
//            }
//            else 
//            {
//                if (nums[mid] < target && target <= nums[n - 1])
//                {
//                    l = mid + 1;
//                }
//                else 
//                {
//                    r = mid - 1;
//                }
//            }
//        }
//        return -1;
//    }
//};
//


