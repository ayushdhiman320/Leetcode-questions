class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>f;

        for(auto it:s){
            f[it]++;
        }
        int one=0,cnt=0;
        for(auto it1:f){
            int rem=it1.second%2;
            if(rem==0){
                cnt+=it1.second;
            }
            else{
                one=1;
                cnt+=(it1.second-1);
            }
        }
        cnt+=one;
        return cnt;
    }
};