// Last updated: 16/06/2026, 14:13:38
int searchInsert(int* nums, int numsSize, int target) {
    int flag = 0, i,idx;
    for( i = 0; i < numsSize ; i++)
    {
        if(nums[i] == target)
        {
            flag = 1;
            break;
        }
        
    }
    if(flag == 1)
    idx =  i;
    else if (target > nums[numsSize-1])
    idx =  numsSize;
    else if(target < nums[0])
    idx = 0;
    else{
        for(int i = 0; i < numsSize-1 ; i++)
        {
            if(target > nums[i] && target <nums[i+1])
            {
                idx =  i+1;
                break;
            }
            
        }
    }
    return idx;
}