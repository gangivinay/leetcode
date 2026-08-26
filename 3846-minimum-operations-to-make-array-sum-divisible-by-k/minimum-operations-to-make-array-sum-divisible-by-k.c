#include <stdio.h>

int minOperations(int* nums, int numsSize, int k) {
    long long totalSum = 0; // Using long long prevents numbers from getting too large and breaking
    
    // Step 1: Calculate the total sum of all elements in the array
    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }
    
    // Step 2: Find the remainder using the modulo (%) operator
    int operationsNeeded = totalSum % k;
    
    // Step 3: Return the final result
    return operationsNeeded;
}
