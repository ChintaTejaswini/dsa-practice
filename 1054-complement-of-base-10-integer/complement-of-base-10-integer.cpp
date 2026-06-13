class Solution {
public:
    int bitwiseComplement(int n) {
        int bit, i=0, ans=0,digit=0;
        if(n==0){
            return 1;
        }
        while(n!=0){
            bit = n&1;  // extract bit using AND operator
            bit=!bit; // using NOT operator to get compliment bit
            if(bit==1){
                digit+=pow(2,i);
            } 
            i++;
            n=n>>1;

        }
       
        return digit;
    }
};