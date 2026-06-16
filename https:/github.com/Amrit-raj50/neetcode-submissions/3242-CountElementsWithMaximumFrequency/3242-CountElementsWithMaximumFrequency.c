// Last updated: 16/06/2026, 14:11:46
int maxFrequencyElements(int* nums, int numsSize) {
    int new_arr[numsSize];
    for(int i = 0 ; i < numsSize ; i++)
    {
        int count = 0 ;
        for(int j = 0 ; j < numsSize ; j++)
        count = nums[i] == nums[j] ? count+1 : count;

        new_arr[i] = count ;
    }
    int max = new_arr[0];
    for(int i = 0 ; i < numsSize-1 ; i++)
    max = max > new_arr[i+1] ? max : new_arr[i+1];
    
    int max_sum = 0;
    for(int i = 0 ; i < numsSize ; i++)
    max_sum = max == new_arr[i] ? max_sum+1 : max_sum;


    return max_sum;
}