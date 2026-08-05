class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp;
        for(auto x:stones){
            mp[x]++;
        }
        int cnt=0;
        for(auto y:jewels){
            if(mp[y]){
                cnt+=mp[y];
            }
        }
        return cnt;
    }
};