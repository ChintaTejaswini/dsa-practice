class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        dict={}
        for i in stones:
            if i in dict:
                dict[i]+=1
            else:
                dict[i]=1
        ans=0
        for i in range(len(jewels)):
            ch=jewels[i]
            if ch in dict:
                ans+=dict[ch] 
        return ans       