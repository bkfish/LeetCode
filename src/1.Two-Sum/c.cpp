

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
   int *tmp=(int *)malloc(sizeof(int )*2);
	for(int i=0;i<numsSize;i++)
	for(int j=i+1;j<numsSize;j++)
	{
		if(nums[i]+nums[j]==target)
		{
			tmp[0]=i;
			tmp[1]=j;
            break;
		}
	}
    *returnSize=2;
	return tmp;
}


