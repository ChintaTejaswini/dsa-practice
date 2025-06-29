class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        dict={}
        for i in nums:
            if i not in dict:
                dict[i]=1
            else:
                dict[i]+=1
        ans=-1
        temp=len(nums)//2
        for i in dict:
            val=dict[i]
            if val>temp:
                ans=i
                break
        return i