class Solution {
public:
    string getHint(string secret, string guess) {
        static const auto fast = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
        int cow=0,bull=0;
        int n=secret.size();
        unordered_map<char,int>hash;
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i]){
                bull++;
            }
            else{
                hash[secret[i]-'0']++;
            }
        }
        for(int i=0;i<n;i++){
            if(secret[i]!=guess[i]){
                int d=guess[i]-'0';
                if(hash[d]>0){
                    cow++;
                }
            hash[d]--;
            }
        }
        return to_string(bull)+"A"+to_string(cow)+"B";
    }
};