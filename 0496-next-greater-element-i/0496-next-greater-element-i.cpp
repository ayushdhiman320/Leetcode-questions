class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        stack<int>st;
        unordered_map<int,int>res;
        st.push(nums2[n-1]);
        res[nums2[n-1]]=-1;

        for(int i=n-2;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()) res[nums2[i]]=-1;
            else{
                res[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }

        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            int answer=res[nums1[i]];
            ans.push_back(answer);
        }
        return ans;

    }
};