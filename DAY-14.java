class Solution {
    public int removeDuplicates(int[] nums) {
        int f=nums[0];
        int k=1;
        //int temp;
        for(int i=1;i<nums.length;i++)
        {
            if(nums[i]>f)
            {
                nums[k++]=nums[i];
                f=nums[i];
            }
        }
        return k;
    }
}
