class Solution {
public:
    int result(int n){
        int sum=0;
        while(n>0){
            int rem=n%10;
            sum+=rem;
            n=n/10;
        }
        return sum;
    }
    int addDigits(int num) {
        int res=result(num);
        while(res>=10){
            res=result(res);
        }
        return res;
    }
};