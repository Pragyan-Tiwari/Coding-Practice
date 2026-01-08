class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int r = digits.size();
        for (int i = r - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i] += 1;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};