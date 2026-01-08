class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int xorr=0,xor1=0;
      int n=nums.size();
      for(int i=0;i<n;i++){
        xorr=xorr^nums[i];
        xor1=xor1^(i+1);
      }  
      return xorr^xor1;
    }
};