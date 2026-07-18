class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>rans;
        unordered_map<char,int>mag;

        for(int i=0;i<ransomNote.size();i++){
            rans[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++){
            mag[magazine[i]]++;
        }

        for(auto it:ransomNote){
            if(rans[it]>mag[it]) return false;
        }

        return true;
    }
};