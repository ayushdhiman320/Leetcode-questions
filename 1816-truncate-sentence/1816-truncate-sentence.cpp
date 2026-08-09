class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string>word_vect;
        stringstream ss(s);
        string word;

        while(getline(ss,word,' ')){
            word_vect.push_back(word);
        }

        int i=0;
        string res="";
        while(i<k){
            res+=word_vect[i];
            if(i<k-1){
                res+=' ';
            }
            i++;
        }
        return res;

    }
};