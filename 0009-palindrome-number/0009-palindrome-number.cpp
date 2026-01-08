class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        long long sum=0;
        while(x!=0){
        int mod=x%10;
        sum=(sum*10)+mod;
        x=x/10;
        }if(original<0){
            return false;
        }
        else{
    return sum==original;
        }
    }
};