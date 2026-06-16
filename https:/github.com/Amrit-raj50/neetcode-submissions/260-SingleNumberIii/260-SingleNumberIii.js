// Last updated: 16/06/2026, 14:12:59
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var singleNumber = function(nums) {
    let arr =[]
    let obj ={}
    for(let i = 0;i<nums.length;i++){
        if(obj[nums[i]]==undefined){
            obj[nums[i]]=1
        }
        else{
            obj[nums[i]]++
        }
    }
    for(let char in obj){
        if(obj[char]==1){
            arr.push(Number(char))
        }
    }
    return arr
};