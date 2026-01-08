class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size();
        int maxx=0;
    int l=0,r=1;
    sort(nums.begin(),nums.end());
        while(r<n){
              if(nums[r]-nums[l]==1){
                maxx=max(maxx,r-l+1);
            }
            while(nums[r]-nums[l]>1){l++;}
            r++;
        }
    return maxx;
    }
};