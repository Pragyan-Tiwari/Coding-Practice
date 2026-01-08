class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>st;
        int maxx=0;
        int n=s.size();
        int l=0;
        for(int i=0;i<n;i++){
            if(st.count(s[i])==0){
                st.insert(s[i]);
                maxx=max(maxx,(i-l+1));
            }
            else{
                while(st.count(s[i])){
                    st.erase(s[l]);
                    l++;
                }
                st.insert(s[i]);
            }
        }
        return maxx;
    }
};