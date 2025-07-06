class Solution:
    def countGoodSubstrings(self, s: str) -> int:
        n=len(s)
        ans=0
        dict={}
        k=3
        l=0
        for r in range(n):
            if s[r] in dict:
                dict[s[r]]+=1
            else:
                dict[s[r]]=1
            if r-l==k:
                dict[s[l]]-=1
                if dict[s[l]]==0:
                    dict.pop(s[l])
                l+=1
            if len(dict)==k:
                ans+=1
        return ans
