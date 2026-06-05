class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul=1,add=0,num;
        while(n!=0){
            num=n%10;
            mul=mul*num;
            add+=num;
            n/=10;
        }
        return mul-add;
    }
};