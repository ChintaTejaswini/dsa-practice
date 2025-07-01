class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        dict={}
        temp=97 #we use ASCII values since a=97 we take temp as 97
        for i in key:
            if i!=" " and i not in dict:
                dict[i]=chr(temp)
                temp+=1
        ans=""
        for i in message:
            if i==" ":                    
                ans+=" "
            else:
                ans+=dict[i]
        return ans