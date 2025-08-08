class Solution:
    def smallestEvenMultiple(self, n: int) -> int:
        multiple=2
        ans=0
        if n%multiple==0:
            ans=n
        else:
            ans=n*multiple
        return ans