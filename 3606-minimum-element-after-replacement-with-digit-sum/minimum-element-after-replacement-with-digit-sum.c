#include<stdio.h>

int minElement(int* nums, int numsSize) {

    int minimum = 1000000;

    for(int i=0;i<numsSize;i++){
        int n =nums[i];
        int sum = 0;
    
    while(n >0 ){
        sum += n % 10;
        n = n/10;
    }
    if(sum < minimum){
        minimum = sum;
    }

    }
    return minimum;
}