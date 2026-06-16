// Last updated: 16/06/2026, 14:13:20
int majorityElement(int *nums, int numsSize)
{
    // int n = numsSize / 2;
    // int idx = 0;
   
    // for (int i = 0; i < numsSize; i++)
    // {
    //      int count = 0;
    //     for (int j = 0; j < numsSize; j++)
    //     {
    //         if (nums[i] == nums[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (count > n)
    //     {
    //         idx = i;
    //         break;
    //     }
    // }

    int res = nums[0];
    int count = 1;

    for(int i = 1 ; i < numsSize ; i++){
        if(count == 0){
             res = nums[i];
             count = 1;
        }
        else if(res == nums[i]){
            count++;
        }
        else{
            count--;
        }
    }

    return res;
}