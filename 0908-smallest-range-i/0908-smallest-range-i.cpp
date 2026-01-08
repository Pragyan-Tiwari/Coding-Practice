class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxx=*max_element(nums.begin(),nums.end());
        int minn=*min_element(nums.begin(),nums.end());
        int diff=(maxx-minn);
        int res=max(diff-(2*k),0);
        return res;
        
    }
};