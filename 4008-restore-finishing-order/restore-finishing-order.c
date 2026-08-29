/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>

int* recoverOrder(int* order, int orderSize, int* friends, int friendsSize, int* returnSize) {

int* result = (int* )malloc(friendsSize*sizeof(int));
int n=0;
for(int i=0;i<orderSize;i++){
    for(int j=0;j<friendsSize;j++){
      if(order[i]==friends[j]){
       result[n++] = order[i];
       break;
      }
    }
}
*returnSize = n; 
return result;
}