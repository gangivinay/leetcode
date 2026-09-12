/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int numsSize, int* returnSize) {
    
    int e=0;
    for(int i=0; i<numsSize;i++){
        if(nums[i] % 2 ==0){
            e++;
        }
    }

    *returnSize = numsSize;
    int* ans = (int*)malloc(numsSize* sizeof(int));

    for(int i=0; i<e;i++){
        ans[i] = 0;
    }

    for(int i=e;i<numsSize;i++){
        ans[i] = 1;
    }
    return ans;
}