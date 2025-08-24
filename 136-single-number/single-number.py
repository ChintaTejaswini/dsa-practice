class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
    
        """
        ans=0
        for value in range(len(nums)):
            ans=ans^nums[value]
        return ans
        