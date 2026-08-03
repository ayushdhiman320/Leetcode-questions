class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)) && ((s[j]>=65 && s[j]<=90) || (s[j]>=97 && s[j]<=122))){
                swap(s[i],s[j]);
                i++;
                j--;
                continue;
            }
            if((s[i]>=33 && s[i]<=64) || (s[i]>=91 && s[i]<=96)){
                i++;
            }
            if((s[j]>=33 && s[j]<=64) || (s[j]>=91 && s[j]<=96)){
                j--;
            }
        }
        return s;
    }
};