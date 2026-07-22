class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;

        int low = 1, high = x;
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Use division (mid <= x / mid) instead of multiplication (mid * mid <= x)
            // to completely avoid integer overflow!
            if (mid <= x / mid) {
                ans = mid;     // mid could be our answer, try to find a larger one
                low = mid + 1;
            } else {
                high = mid - 1; // mid * mid is too large, search the left half
            }
        }

        return ans;
    }
};