#include<stdio.h>
#include<stdlib.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int n = numsSize;
    int *rA;
    rA = (int*)malloc(2*n*sizeof(int));
    for(int i=0;i<n;i++){
        rA[i] = nums[i];
        rA[i+n] = nums[i];
    }
    // for(int i=0;i<6;i++){
    //     printf("%d\n",rA[i]);
    // }
    *returnSize = 2*n;
    return rA;
}
int main(){
    int nums[] = {1,2,1};
    int returnSize;
    // int *ans = getConcatenation(nums,3,&returnSize);
    // or 
    int *ans = getConcatenation(&nums[0],3,&returnSize);
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", ans[i]);
    }
    printf("%p %p",nums,&nums[0]);
    free(ans);
    return 0;
}