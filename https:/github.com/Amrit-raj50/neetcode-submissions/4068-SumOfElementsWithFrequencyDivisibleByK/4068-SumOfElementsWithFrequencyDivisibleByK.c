// Last updated: 16/06/2026, 14:11:38
int sumDivisibleByK(int* nums, int numsSize, int k) {

    int sum = 0;

    for(int i = 0 ; i < numsSize ; i++)
    {
        int count = 0;
        for(int j = 0 ; j < numsSize ; j++)
        {
            if(nums[i] == nums[j])
                count++;
        }
        if(count % k == 0)
            sum = sum + nums[i];
    }
    return sum;
}