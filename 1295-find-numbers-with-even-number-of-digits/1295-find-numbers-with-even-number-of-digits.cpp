class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int i=0,count=1;
        int res=0;
        while(i<nums.size()){
            nums[i]/=10;
            
            if(nums[i]==0){
                if(count%2==0){
                    res++;
                    i++;
                    count=1;
                    continue;
                }
                else{
                    i++;
                    count=1;
                    continue;
                }
            }
            count++;
        }
        return res;
    }
};