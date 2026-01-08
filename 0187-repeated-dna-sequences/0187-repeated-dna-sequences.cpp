class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.size();
        if(n<10)return {};
        unordered_set<string>rep,seen;
        for(int i=0;i+9<n;i++){
            string sub=s.substr(i,10);
            if(seen.count(sub)){
                rep.insert(sub);
            }
            else{
                seen.insert(sub);
            }
        }
        return vector<string>(rep.begin(),rep.end());
    }
};