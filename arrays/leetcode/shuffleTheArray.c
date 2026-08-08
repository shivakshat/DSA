// Input: nums = [2,5,1,3,4,7], n = 3
// Output: [2,3,5,4,1,7] 
// Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].
#include<stdio.h>
#include<stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    
    int c=0;
    int *sa;
    int *nums1;
    int *nums2;
    sa = (int*)malloc(2*n*sizeof(int));
    nums1 = (int*)malloc(n*sizeof(int));
    nums2 = (int*)malloc(n*sizeof(int));


    // for(int i=0;i<n;i++){
    //     nums1[i] = nums[i];
    //     nums2[i] = nums[i+n];
    // }
    // for(int i=0;i<n;i++){
    //     printf("%d",nums1[i]);
    // }
    // for(int i=0;i<n;i=i+1){
    //     printf("%d ",nums2[i]);
    // }
    // for(int i=0;i<2*n;i=i+2){
    //     sa[i] = nums1[c];
    //     sa[i+1] = nums2[c];
    //     c++;
    // }
    *returnSize = 2*n;
    printf("In the func\n");
    printf("*returnSize = %d\n", *returnSize);
    printf("returnSize = %p\n", returnSize);
    return sa;
}
void main(){
    // int nums[] = {1,2,3,4,5,6};
    // int nums[] = {1,2,3,4,4,3,2,1};
    int nums[] = {1,1,2,2};

    int numsize = sizeof(nums)/sizeof(int);
    int n = numsize/2;
    int rS;
    int *ans = shuffle(nums,numsize,n,&rS);
    // for(int i=0;i<numsize;i++){
    //     printf("%d ",nums[i]);
    // }
    // printf("\n");
    // for(int i=0;i<returnSize;i++){
    //     printf("%d ",ans[i]);
    // }
    printf("Out of the func\n");
    printf("returnSize = %d\n", rS);
    printf("&returnSize = %p\n", &rS);
    return;
}