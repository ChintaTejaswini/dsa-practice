class Solution:
    def numberOfSteps(self, num: int) -> int:
        no_of_steps=0
        while num>0:
            if num%2==0:
                num=num//2  #if the number is divisible by 2 then divide
            else:
                num=num-1  #else if odd sub the num by 1 and continue loop
            no_of_steps+=1
        return no_of_steps