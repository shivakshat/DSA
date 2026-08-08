/* 
You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.
You are given an integer array nums representing the data status of this set after the error.
Find the number that occurs twice and the number that is missing and return them in the form of an array.
 */
#include<stdio.h>
#include<stdlib.h>
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int *errorNums;
    errorNums = (int*)malloc(2*sizeof(int));
    *returnSize = 2;
    int found = 1;
    for(int i=0;i<numsSize;i++){
      for (int j = i+1; j < numsSize; j++)
      {
        if(nums[i] == nums[j]) {
            errorNums[0] = nums[i];
            goto ol;
        }
    }
}
ol:
    for (int k = 1; k <= numsSize; k++) {
    found = 0;          // Reset for every new number
    for (int j = 0; j < numsSize; j++) {
        if (k == nums[j]) {
            found = 1;
            break;
        }
    }
    if (found == 0) {
        errorNums[1] = k;
        return errorNums;
    }
}
    free(errorNums);
    return NULL;
}
void main(){
    // int nums[] = {1,2,2,4};
    // int nums[] = {1,1};
    // int nums[] = {2,2};
    int nums[] = {1,2,2,4};
    // int nums[] = {1,2,3,4,5,6,4};
    // int nums[] = {1,2,3,4,5,6,7};
    int size = sizeof(nums)/sizeof(int);
    int rsize;
    int *ans = findErrorNums(nums,size,&rsize);
    for(int i=0;i<2;i++){
        printf("%d ",ans[i]);}
    return;
}