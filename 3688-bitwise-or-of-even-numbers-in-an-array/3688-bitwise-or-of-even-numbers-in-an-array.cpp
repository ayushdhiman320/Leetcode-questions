class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                int bit_wise=sum|nums[i];
                sum=bit_wise;
            }
        }
        return sum;
    }
};