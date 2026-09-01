



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 #include<stdio.h>
 #include<stdlib.h>

int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
 int* ans = malloc(wordsSize * sizeof(int));  
 *returnSize =0; 
for(int i=0;i<wordsSize;i++){
for(int j=0; words[i][j] !='\0';j++){
    if(words[i][j]==x){
      ans[*returnSize] = i;
        (*returnSize)++;
        break;
    }
}
    
}

return ans;

}

