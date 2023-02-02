#include <stdio.h>  
#include<stdbool.h>  
int comp (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
bool containsDuplicate(int* nums, int numsSize){
    int i,j;
    qsort (nums, numsSize, sizeof(*nums), comp);
    for(i=0;i<numsSize-1;i++)
    {
        if(nums[i]==nums[i+1])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int a[4];
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=1;
    printf("%d\n",containsDuplicate(a,4));
}
