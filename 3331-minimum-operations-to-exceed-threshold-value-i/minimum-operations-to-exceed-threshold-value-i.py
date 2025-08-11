class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        ans=0
        n=len(nums)
        for i in range(n):
            if nums[i]<k:
                ans+=1
        return ans