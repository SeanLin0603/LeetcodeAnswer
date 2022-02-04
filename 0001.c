/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
    *returnSize = 2;
        
    int* result = (int*)malloc(2*sizeof(int));
    
    for(int i=0;i<numsSize;i++)
    {
        int a = nums[i];
        
        for(int j=i+1;j<numsSize;j++)
        {
            int b = nums[j];
            
            if(a+b == target)
            {
                result[0]=i;
                result[1]=j;
                return result;
            }
        }
    }
    return result;
}