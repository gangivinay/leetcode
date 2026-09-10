

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include<stdio.h>
 #include<stdlib.h>

int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {

*returnSize = 2;

int* ans = malloc(2*sizeof(int));

int n=0;

for(int i=0; i<numsSize;i++){
for(int j=i+1;j<numsSize;j++){
    if(nums[i]==nums[j]){
       ans[n++] = nums[i];
       break;
    }
}

}

return ans;
}



