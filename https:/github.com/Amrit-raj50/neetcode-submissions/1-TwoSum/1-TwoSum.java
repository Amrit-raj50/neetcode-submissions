// Last updated: 16/06/2026, 14:13:54
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int i = 0;
        int j = 0;
        for( i = 0; i < nums.length; i++)
        {
            for( j = i + 1; j < nums.length;j++)
            {
                if((nums[i] + nums[j]) == target)
                {
                    int[] arr = {i,j};
                    return arr;
                }
            }
        }
        return new int[] {};
    }
}