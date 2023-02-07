class Solution {
public int[] sortArrayByParity(int[] nums) {
int k=nums.length;
int c=0;
int[] b=new int[k];
k-=1;
for(int i=0;i&lt;nums.length;i++)
{
if(nums[i]%2==0)
b[c++]=nums[i];
else
b[k--]=nums[i];
}
return b;
}
}
