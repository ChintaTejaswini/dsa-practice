class Solution {
public:
    bool isSameAfterReversals(int num) {
        int reversed1=0;
        int dup=num;
        int lastdigit=0;
        int reversed2=0;
        while(num>0){
            lastdigit=num%10;
            num=num/10;
            reversed1=(10*reversed1)+lastdigit;
        }
        while(reversed1>0){
            lastdigit=reversed1%10;
            reversed1/=10;
            reversed2=(10*reversed2)+lastdigit;
        }
        return (reversed2==dup);
    }
};