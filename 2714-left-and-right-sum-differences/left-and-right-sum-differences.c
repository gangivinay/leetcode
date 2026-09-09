/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include<stdio.h>
 #include<stdlib.h>

int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;

int* ans= (int*)malloc(numsSize*sizeof(int));

int left = 0;
int right = 0;

for(int i=0;i<numsSize;i++){
    right += nums[i];
}

for(int i=0; i<numsSize;i++){
    right -= nums[i];

    ans[i] = abs(left - right);

    left += nums[i];
}


return ans;
}