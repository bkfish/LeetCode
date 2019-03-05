class Solution:
	def twoSum(self,nums: 'list[int]',target:'int')->'list[int]':
		dic={}
		length=len(nums)
		for i in range(length):
			for j in range(i+1,length):
				if nums[i]+nums[j]==target:					
					return [i,j]

nums=[2,7,11,13];
target1=9;
obj=Solution()
a=obj.twoSum(nums,target1)
print(a)