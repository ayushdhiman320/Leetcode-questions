class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Powers of two must be positive AND have only one set bit
        return n > 0 && (n & (n - 1)) == 0;
    }
};