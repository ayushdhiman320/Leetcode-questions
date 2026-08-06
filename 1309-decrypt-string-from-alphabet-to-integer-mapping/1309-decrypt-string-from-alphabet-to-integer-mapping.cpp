class Solution {
public:
    char alpha(string s1){
        int number=stoi(s1);
        char ch = 96+number;
        return ch;
    }
    string freqAlphabets(string s) {
        string res="";
        int n=s.size();
        int i=n-1;
        while(i>=0){
            string s1="";
            if(s[i]=='#'){
                s1.push_back(s[i-2]);
                s1.push_back(s[i-1]);
                char ch=alpha(s1);
                res.push_back(ch);
                i-=3;
                continue;
            }
            s1.push_back(s[i]);
            char ch=alpha(s1);
            res.push_back(ch);
            i--;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};