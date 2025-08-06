class Solution:
    def countPairs(self, nums: List[int], target: int) -> int:
        nums.sort()
        low, high = 0, len(nums) - 1
        ans = 0
        while low < high:
            if nums[low] + nums[high] < target:
                ans += high - low
                low += 1
            else:
                high -= 1
        return ans  
