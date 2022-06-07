#include<stdio.h>
#include<stdlib.h>


int removeElement(int* nums, int numsSize, int val) {
    int src = 0;
    int dest = 0;
    while (src < numsSize)
    {
        if (nums[src] != val)
        {
            nums[dest++] = nums[src++];
        }
        else
        {
            src++;
        }
    }
    return dest;
}

int removeDuplicates(int* nums, int numsSize) {
    int dest = 0;
    int src = 1;
    while (src < numsSize)
    {
        if (nums[dest] == nums[src])
        {
            src++;

        }
        else
        {
            dest++;
            nums[dest] = nums[src];
            src++;
        }
    }
    return dest + 1;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int end1 = m - 1;
    int end2 = n - 1;
    int end = m + n - 1;

    while (end1 >= 0 && end2 >= 0)
    {
        if (nums1[end1] > nums2[end2])
        {
            nums1[end] = nums1[end1];
            end1--;
            end--;
        }
        else
        {
            nums1[end] = nums2[end2];
            end--;
            end2--;
        }
    }

    while (end2 >= 0)
    {
        nums1[end] = nums2[end2];
        end--;
        end2--;
    }
    return nums1;
}
int main()
{

}