class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long sum=0;
        long long maxx=LLONG_MIN;
        int n=nums.size();
       for(int i=0;i<k;i++){
        sum+=nums[i];
       }
       maxx=sum;
       for(int i=k;i<n;i++){
        sum+=nums[i];
        sum-=nums[i-k];
        maxx=max(maxx,sum);
       }
       return (double)maxx/k;
    }
};