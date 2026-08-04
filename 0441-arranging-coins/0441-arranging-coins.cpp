class Solution {
public:
    int arrangeCoins(int n) {
        long low = 1, high = n;
        long ans = 0;

        while (low <= high) {
            long mid = low + (high - low) / 2;
            long coinsNeeded = mid * (mid + 1) / 2;

            if (coinsNeeded <= n) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1; 
            }
        }

        return ans;
    }
};