class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>arr,arr1;
        for(int i:nums1)arr[i]++;
        for(int i:nums2)arr1[i]++;
        vector<int>ans;
        for(auto &x:arr){
            if(arr1.count(x.first)){
                int index=min(arr[x.first],arr1[x.first]);
                while(index--){
                    ans.push_back(x.first);
                }
            }
        }
        return ans;
    }
};