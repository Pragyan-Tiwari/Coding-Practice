class Solution {
public:
    char findTheDifference(string s, string t) {
        char res=0;
        for(char x:s)res=res^x;
        for(char x:t)res=res^x;
        return res;
    }
};