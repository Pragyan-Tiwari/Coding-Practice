class Solution {
public:
    int titleToNumber(string s) {
        int n=0;
        for(char ch:s)n=n*26+(ch-'A'+1);
        return n;
    }
};