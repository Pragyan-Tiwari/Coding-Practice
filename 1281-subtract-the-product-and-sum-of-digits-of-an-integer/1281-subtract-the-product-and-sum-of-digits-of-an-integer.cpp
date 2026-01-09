class Solution {
public:
    int subtractProductAndSum(int n) {
        long long sum=0;
        long long mul=1;
        while(n>0){
            int mod=n%10;
            sum+=mod;
            mul*=mod;
            n/=10;
        }
        return mul-sum;
    }
};