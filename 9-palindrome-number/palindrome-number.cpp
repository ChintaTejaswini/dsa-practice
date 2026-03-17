class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0){
            return false;           // if the x value is false 
        }              // rev no can't be same as x since - symbol changes
        long int temp=x,rev=0,rem;

        while(x!=0){
            rem = x % 10;       // extracting each last digit
            rev = (rev * 10) + rem;     // adding last digit to reverse no
            x /= 10;        // removing extracted digit
        }
        return rev==temp;       // palindrome works only if number == reverse
    }
};