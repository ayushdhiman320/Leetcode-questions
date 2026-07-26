class Solution {
public:
    bool detectCapitalUse(string word) {
        int all_cap=0;
        int first_cap=0;
        int all_small=0;
        for(int i=0;i<word.size();i++){
            if(word[i]>=65 && word[i]<=90){
                all_cap++;
                if(i==0){
                    first_cap++;
                }
            }
            else if(word[i]>=97 && word[i]<=122){
                all_small++;
                if(i>0){
                    first_cap++;
                }
            }
        }
        if(first_cap==word.size()) return true;
        else if(all_cap==word.size()) return true;
        else if(all_small==word.size()) return true;

        return false;
    }
};