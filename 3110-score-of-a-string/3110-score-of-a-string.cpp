class Solution {
public:
    int scoreOfString(string s) {
        int n=s.size();
        int sum=0;
        int i=0;
        while(i<n-1){
            int diff = s[i]-s[i+1];
            sum+=abs(diff);
            i++;
        }
        return sum;
    }
};