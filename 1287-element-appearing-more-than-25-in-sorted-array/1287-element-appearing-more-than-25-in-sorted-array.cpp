class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=(25*arr.size())/100;
        unordered_map<int,int>hash;
        for(int x:arr){
            hash[x]++;
        }
        for(auto &p:hash){
            if(p.second>n){
                return p.first;
            }
        }
        return -1;
    }
};