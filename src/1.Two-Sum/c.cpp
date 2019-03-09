#include<stdio.h>
#include<malloc.h> 
int main()
{
	int a[100]={2,7,11,15};
	int numsize=4,target=9;
	int * twoSum(int *nums,int numsize,int target);
	int *find;
	find=twoSum(a,numsize,target);
	printf("下标分别为：%d %d",find[0],find[1]);
}
 
int * twoSum(int *nums,int numsSize,int target){
	int *twoSum=(int *)malloc(sizeof(int )*2);
	for(int i=0;i<numsSize;i++)
	for(int j=i+1;j<numsSize;j++)
	{
		if(nums[i]+nums[j]==target)
		{
			twoSum[0]=i;
			twoSum[1]=j;
		}
	}
	return twoSum;
}
