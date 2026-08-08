/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int *out;
    out = (int*)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++){
        int c = 0;
        for(int j=0;j<numsSize;j++){
            if(i!=j && nums[j]<nums[i]){
                c++;
            }
        }
        out[i] = c;
    }
    return out;
}
int main(){
    int nums[] = {1,2,3};
    int a[] = {1,2,3};
    a[3] = 3;
    // printf("%d",a[3]);
    int found = 0;
    int out[]={};
    int c=0;
    int numsSize = 3;
    for(int i=1;i<=numsSize;i++){
        for(int j=0;j<numsSize;j++){
            if(i==nums[j]){
                found = 1;
            }
        }
        if(found==0){
            out[c] = i;
            c++;
        }
    }
    int size = sizeof(out)/sizeof(int);
    printf("%d",size);
    return 0;
}