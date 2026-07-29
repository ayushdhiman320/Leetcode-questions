class Solution {
public:
    // Helper function to check if a character is a vowel (case-insensitive)
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {
            // Move 'i' forward until it hits a vowel or meets 'j'
            while (i < j && !isVowel(s[i])) {
                i++;
            }

            // Move 'j' backward until it hits a vowel or meets 'i'
            while (i < j && !isVowel(s[j])) {
                j--;
            }

            // Swap the two vowels found
            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};