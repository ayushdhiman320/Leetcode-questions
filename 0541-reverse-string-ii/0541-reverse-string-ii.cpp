class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        
        for (int i = 0; i < n; i += 2 * k) {
            // Reverse up to 'k' characters, or up to the end of string 'n', whichever comes first
            reverse(s.begin() + i, s.begin() + min(i + k, n));
        }
        
        return s;
    }
};