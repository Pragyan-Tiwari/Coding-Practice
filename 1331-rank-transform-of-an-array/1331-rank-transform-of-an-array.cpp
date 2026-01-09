class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int>hash;
        vector<int>nums=arr;
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]=i+1;
        }
        for(int &v:arr){
            v=hash[v];
        }
    return arr;
    }
};