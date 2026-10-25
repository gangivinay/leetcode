/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 #include<stdio.h>
 

int* findMissingElements(int* nums, int numsSize, int* returnSize) {
 int max = nums[0];
 int min = nums[0];

 for(int i = 0; i<numsSize;i++){
  if(nums[i] > max){
    max = nums[i];
  }
  if(nums[i] < min){
    min = nums[i];
  }
 }
  int* r = (int*)malloc((max - min + 1) * sizeof(int));
*returnSize = 0;
for(int i=min; i< max;i++){
    int g=0;
    for(int j=0; j<numsSize;j++){
        if(nums[j]==i){
            g = 1;
            break;
        }
    }
    if(!g){
        r[(*returnSize)++] = i; 
            }
}
return r;
}

 
