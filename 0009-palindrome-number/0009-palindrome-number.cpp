class Solution {
public:
    bool isPalindrome(int x) {
        long rev = 0;
        int dup = x;
        while(x>0){
            int ld = x%10;
            rev = (rev*10)+ld;
            x=x/10;
        }
        if(dup == rev)
        return true;
        else
        return false;
    }
};