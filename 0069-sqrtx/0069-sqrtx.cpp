class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;

        double r = x;   
        while (fabs(r*r - x) > 1e-6) {
            r = (r + x / r) / 2.0;
        }
        return (int)r;  
    }
};