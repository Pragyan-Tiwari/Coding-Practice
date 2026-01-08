class Solution {
public:
    bool isPalindrome(string stringg) {
        int i=0,j=stringg.size()-1;
        while(i<j){
            while(i<j && !isalnum(stringg[i]))i++;
            while(i<j && !isalnum(stringg[j]))j--;
            if(tolower(stringg[i])!=tolower(stringg[j]))return false;
            i++;j--;
        }
        return true;
    }
};