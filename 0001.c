/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int result[2] = { 0 };

	for (int i = 0; i < numsSize; i++)
	{
		int a = nums[i];

		for (int j = i + 1; j < numsSize; j++)
		{
			int b = nums[j];

			if (a + b == target)
			{
				result[0] = i;
				result[1] = j;
				return result;
			}
		}
	}
	return result;
}

int main()
{
	int a[] = { 2, 7, 11, 15 };

	int* result = twoSum(a, 4, 26, nullptr);
	printf("%d %d\n", *result, *(result + 1));

	printf("%d\n", *result);
	printf("%d\n", *(result + 1));

}
