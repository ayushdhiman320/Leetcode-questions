class Solution {
public:
    string removeDuplicates(string s, int k) {
        string res="";
        stack<pair<char,int>>st;

        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(st.empty()){
                st.push({ch,1});
                continue;
            }

            if((st.top()).first!=ch){
                st.push({ch,1});
            }
            else{
                if((st.top()).second<k-1){
                    pair<char,int>p=st.top();
                    st.pop();
                    st.push({p.first,p.second+1});
                }
                else{
                    st.pop();
                }
            }
        }

        while(!st.empty()){
            pair<char,int>p=st.top();
            st.pop();
            while(p.second--){
                res.push_back(p.first);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};