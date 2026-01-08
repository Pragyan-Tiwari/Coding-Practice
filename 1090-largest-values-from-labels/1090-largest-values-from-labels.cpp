class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        unordered_map<int,vector<int>>hash;
        for(int i=0;i<labels.size();i++){
            hash[labels[i]].push_back(values[i]);
        }
        for(auto &p:hash){
            sort(p.second.rbegin(),p.second.rend());
        }
        vector<int>ans;
        for(auto &p:hash){
            for(int i=0;i<min(useLimit,(int)p.second.size());i++){
                ans.push_back(p.second[i]);
            }
        }
        long long sum=0;
        sort(ans.rbegin(),ans.rend());
        for(int i=0;i<min((int)ans.size(),numWanted);i++){
                sum+=ans[i];
        }
        return sum;
    }
};