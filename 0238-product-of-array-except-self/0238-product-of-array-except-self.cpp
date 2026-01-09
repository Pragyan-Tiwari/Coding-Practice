class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count=0;
        long long mul=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)count++;
        }
        if(count==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0){
                    mul*=nums[i];
                }
            }
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    nums[i]=mul;
                }
                else{
                    nums[i]=0;
                }
            }
        }
        else if(count>1){
            for(int i=0;i<nums.size();i++){
                nums[i]=0;
            }
        }
        else{
            for(int i=0;i<nums.size();i++){
                mul*=nums[i];
            }
            for(int i=0;i<nums.size();i++){
                nums[i]=mul/nums[i];
            }
        }







    return nums;
    }
};