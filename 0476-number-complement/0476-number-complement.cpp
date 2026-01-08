class Solution {
public:
    int findComplement(int num) {
        int mask = 1;
        int n = num;
        
        
        while (n >>= 1) {
            mask = (mask << 1) | 1;
        }
        
    
        return num ^ mask;
    }
};