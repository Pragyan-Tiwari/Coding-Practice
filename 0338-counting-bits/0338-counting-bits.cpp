class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>arr(n+1);
        int count=0;
        for(int i=0;i<arr.size();i++){
            count=0;
            int x=i;
            while(x>0){
            count+=x&1;
            x>>=1;
            }
            arr[i]=count;
            
            
        }
        return arr;
    }
};