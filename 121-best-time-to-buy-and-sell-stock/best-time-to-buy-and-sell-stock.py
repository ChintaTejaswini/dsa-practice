class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        #set the variables
        min_val=float('inf')
        profit=0
        for num in prices:#loop to access every value
            min_val=min(num,min_val) #maintains the minimum value
            profit=max(profit,num-min_val) #update the maximum profit value
        return profit

        