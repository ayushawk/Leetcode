class Solution {
public:
    bool isPalindrome(int x) {
        int y = x, d;
        long p = 0;

        if(x < 0)
            return false;
            
        while(x!=0){
            d = x % 10;
            p = p*10 + d;
            x = x/10;
        }
        return p==y;

    }
};