class Solution:
    def maximum69Number (self, num: int) -> int:
            ans=str(num)
            ans=ans.replace("6","9",1)
            return int(ans)