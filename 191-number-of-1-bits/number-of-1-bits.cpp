class Solution {
public:
    int hammingWeight(int n) {
        int num,count=0;
        while(n>0){
            num=n%2;
            n/=2;
            if(num==1){
                count++;
            }
        }
        return count;
    }
    
};