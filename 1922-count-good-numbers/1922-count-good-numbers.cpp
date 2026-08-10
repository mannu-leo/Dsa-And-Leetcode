class Solution {
public:
    int countGoodNumbers(long long n) {
        const long long MOD=1000000007;
        long long even;
        long long odd;
        if(n%2==0){
            even=(n/2);
            odd=(n/2);
        }
        else{
            even=(n+1)/2;
            odd=(n/2);
        }
        long long ans1=1;
        long long x=5;
        while(even>0){
            
            if(even%2==1){

                ans1=(ans1*x)%MOD;
            }
            x=(x*x)%MOD;
            even/=2;

        }
        long long y=4;
        long long ans2=1;
        while(odd>0){
            if(odd%2==1){
                ans2=(ans2*y)%MOD;
            }
            y=(y*y)%MOD;
            odd/=2;
        }
        return (ans1 * ans2) % MOD;
    }
};