class Solution {
public:
    // Helper function to check if a number has no zero digits
    bool hasNoZero(int x) {
        while (x > 0) {
            if (x % 10 == 0) return false;
            x /= 10;
        }
        return true;
    }

    vector<int> getNoZeroIntegers(int n) {
        for (int i = 1; i < n; i++) {
            int other = n - i;
            if (hasNoZero(i) && hasNoZero(other)) {
                return {i, other};
            }
        }
        return {};
    }
};