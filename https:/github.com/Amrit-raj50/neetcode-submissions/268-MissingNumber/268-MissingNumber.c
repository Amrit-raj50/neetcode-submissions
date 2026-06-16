// Last updated: 16/06/2026, 14:13:01
int missingNumber(int* nums, int numsSize) {
    int i ,j;
    for( i = 0 ; i <= numsSize ; i++)
    {
        int flag = 0;
        for( j = 0 ; j < numsSize ; j++)
        {
            if(i == nums[j])
            flag = 1;
        } 
        if(flag != 1)
        break;
    }
    return i;
}