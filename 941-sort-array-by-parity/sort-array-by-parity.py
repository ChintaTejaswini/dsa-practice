class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        n=len(nums)
        left=0
        for i in range(n):
            if nums[i]%2==0:
                nums[left],nums[i]=nums[i],nums[left]
                left+=1
        return nums