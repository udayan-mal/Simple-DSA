class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int original = x;
        long reversenum = 0 ;
        while (x != 0) {
           int lastdigit = x % 10;
             x = x / 10;
            if(reversenum>INT_MAX/10 || (reversenum == INT_MAX/10 && lastdigit>7)) return 0;   
             if(reversenum<INT_MIN/10 || (reversenum == INT_MIN/10 && lastdigit< -8)) return 0;               
            reversenum = (reversenum* 10) + lastdigit;
    }
    if(original==reversenum) return true;
    else return false;
    }
};