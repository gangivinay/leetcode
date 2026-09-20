#include<stdio.h>
#include<stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* shuffle(int* nums, int numsSize, int n, int* returnSize) {

    int* ans = (int*)malloc(numsSize * sizeof(int));

    *returnSize = numsSize;

    int k = 0;
    int l = 0;

    for (int i = 0; i < numsSize; i++) {

        if (i % 2 == 0) {
            ans[i] = nums[k];
            k++;
        }
        else {
            ans[i] = nums[n + l];
            l++;
        }
    }

    return ans;
}