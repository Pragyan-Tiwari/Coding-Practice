class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int minn=INT_MAX;
        vector<vector<int>>sum;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            minn=min(arr[i]-arr[i-1],minn);
        }
        for(int i=1;i<arr.size();i++){
            if((arr[i]-arr[i-1])==minn){
                sum.push_back({arr[i-1],arr[i]});
            }
        }
        return sum;
    }
};