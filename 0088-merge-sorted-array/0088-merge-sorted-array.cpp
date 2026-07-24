class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr;
        int i = 0, j = 0;
        
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) { // Fixed: compare nums1[i] with nums2[j]
                arr.push_back(nums1[i]);
                i++;
            } else {
                arr.push_back(nums2[j]);
                j++;
            }
        }

        // Fixed: i goes up to m, j goes up to n
        while (i < m) {
            arr.push_back(nums1[i]);
            i++;
        }

        while (j < n) {
            arr.push_back(nums2[j]);
            j++;
        }

        nums1 = arr; // Copy merged elements back into nums1
    }
};