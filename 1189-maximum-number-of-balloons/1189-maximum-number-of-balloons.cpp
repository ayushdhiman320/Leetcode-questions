class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string s="balloon";
        unordered_map<char,int>text_f;
        for(int i=0;i<text.size();i++){
            text_f[text[i]]++;
        }
        unordered_map<char,int>ball_f={{'b',1},{'a',1},{'l',2},{'o',2},{'n',1}};
        int res=INT_MAX;

        for(auto it:s){
            int times=(text_f[it])/(ball_f[it]);
            res=min(res,times);
        }

        return res;


    }
};