class Solution {
public:
    int majorityElement(vector<int>& n) {
        int max=0;
        int max_element=INT_MIN;
        unordered_map<int,int>hash;
        for(int x:n) {hash[x]++;}
        for(auto &p:hash){
            if(p.second>max){
                max=p.second;
                max_element=p.first;
            }
        }
    return max_element;



    }
};