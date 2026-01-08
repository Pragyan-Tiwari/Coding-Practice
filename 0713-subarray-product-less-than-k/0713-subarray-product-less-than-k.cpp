class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l=0,r=0,count=0;
        long long mul=1;
        int n=nums.size();
        while(r<n){
            mul=mul*nums[r];
            if(mul<k){
                count+=r-l+1;
            }
            else{
                while(mul>=k&&l<=r){
                    mul=mul/nums[l++];
                }
                if(mul<k){
                    count+=r-l+1;
                }
            }
            r++;
        }
        return count;
    }
};