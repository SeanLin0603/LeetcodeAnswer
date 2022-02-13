/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
	for (int i = 0; i < numsSize; i++)
	{
		int a = nums[i];
		for (int j = i + 1; j < numsSize; j++)
		{
			int b = nums[j];
			if (a + b == target)
			{
				*returnSize = 2;
	            //static int result[2] = { 0 };
	            int* result = (int*)malloc(2 * sizeof(int));
                
                result[0] = i;
				result[1] = j;
				return result;
			}
		}
	}

    *returnSize = 0;
    return (NULL);
}


int main()
{
	/*int a[] = { 2, 7, 11, 15 };
	int numsSize = 4;
	int target = 9;
	int returnSize = 0;*/

	int a[] = { 3, 2, 4 };
	int numsSize = 3;
	int target = 6;
	int returnSize = 0;

	int* result = twoSum(a, numsSize, target, &returnSize);
	printf("%d %d\n", *result, *(result + 1));
}
