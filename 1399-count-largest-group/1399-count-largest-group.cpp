class Solution {
public:
    // Helper function to calculate sum of digits of a number
    int getDigitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int countLargestGroup(int n) {
        // Frequency array to store counts for each digit sum
        // Max digit sum for n <= 10000 is 36 (for 9999)
        vector<int> groupSize(37, 0);

        int maxSize = 0;

        // Group numbers from 1 to n by digit sum
        for (int i = 1; i <= n; i++) {
            int sum = getDigitSum(i);
            groupSize[sum]++;
            
            // Keep track of the maximum group size seen so far
            maxSize = max(maxSize, groupSize[sum]);
        }

        // Count how many groups have a size equal to maxSize
        int count = 0;
        for (int size : groupSize) {
            if (size == maxSize) {
                count++;
            }
        }

        return count;
    }
};