class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans=0;
        if(n==0){
            return 0;
        }
        int sum=0;
        int digit=0;
        while(n!=0){
            int rem=n%10;
            if(rem!=0){
                sum+=rem;
                digit=digit*10+rem;
            }
            n=n/10;
        }
        int num=0;
        while(digit!=0){
            int rem=digit%10;
            num=num*10+rem;
            digit=digit/10;
        }
        ans=1LL*num*sum;
        return ans;
    }
};