#include<stdio.h>
#include<stdbool.h>
bool isMonotonic(int* nums, int numsSize){
    int i;
    int c=0;
    int j=0;
    for(i=0;i<numsSize-1;i++)
    {
        if(nums[i]<nums[i+1])
        {
            c++;
        }
        
        else if(nums[i]>nums[i+1]) 
        {
            j++;
        }
        else
        {
            c++;
            j++;
        }
    }
    printf("\nF=%d",j);
    if(c==numsSize-1 || j==numsSize-1)
    return true;
    else
    return false;
}
int main()
{
    int a[]={6,5,4,4};
    printf("\n%d\n",isMonotonic(a,4));
}