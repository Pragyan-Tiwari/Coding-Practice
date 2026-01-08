class Solution {
public:
    int numJewelsInStones(string j, string s) {
        int count=0;
        unordered_map<char,int>freq;
        for(char x:s){
            freq[x]++;
        }
        for(char p:j ){
                if(freq.count(p)){
                    count+=freq[p];
                
            }
        }
        return count;

    }
};