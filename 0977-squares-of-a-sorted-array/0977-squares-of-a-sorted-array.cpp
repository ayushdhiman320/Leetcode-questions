class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>neg;
        vector<int>pos;
        int m=0;
        while(m<nums.size() && nums[m]<0){
            int val=nums[m]*nums[m];
            neg.push_back(val);
            m++;
        }
        reverse(neg.begin(),neg.end());
        while(m<nums.size() && m<nums.size()){
            int val=nums[m]*nums[m];
            pos.push_back(val);
            m++;
        }
        
        if(neg.size()==0){
            return pos;
        }
        if(pos.size()==0){
            return neg;
        }

        int i=0,j=0,n=0;
        while(i<neg.size() && j<pos.size()){
            if(neg[i]<=pos[j]){
                nums[n]=neg[i];
                i++;
            }
            else{
                nums[n]=pos[j];
                j++;
            }
            n++;
        }

        while(i<neg.size()){
            nums[n]=neg[i];
            i++;
            n++;
        }
        while(j<pos.size()){
            nums[n]=pos[j];
            j++;
            n++;
        }

        return nums;
    }
};