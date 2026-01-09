class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxx=-1,smax=-1;
        for(int x:nums){
            if(x>maxx){
                smax=maxx;
                maxx=x;
            }
            else if(x>smax){
                smax=x;
            }
        }
        return (maxx-1)*(smax-1);
    }
};