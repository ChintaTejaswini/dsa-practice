class Solution:
    def search(self, nums: List[int], target: int) -> int:
        lo,hi=0,len(nums)-1
        ans=-1
        while lo<=hi:
            mid=(lo+hi)//2
            mid_number=nums[mid]  
            if mid_number==target:
                ans=mid
                break
            elif mid_number<target:
                lo=mid+1
            else:
                hi=mid-1
        return ans