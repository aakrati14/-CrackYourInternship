class Solution {
public:
    bool isPerfectSquare(int num) {
         if(num==1)
        return true;
        else{
            for(long long i=0;i<=num/2;i++){
                if(i*i==num)
                {return true;
                break;}
            }
        }
        return false;
    }
};