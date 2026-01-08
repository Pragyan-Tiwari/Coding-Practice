class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,int>freq,freq1;
        for(char x:s)freq[x]++;
        for(char x:t)freq1[x]++;
        return freq==freq1;
    }
};