class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans;
        while(1){
            int temp=n;
            int product=1;
            while(n!=0){
                int rem=n%10;
                product*=rem;
                n/=10;
            }
            if(product%t==0){
                ans=temp;
                break;
            }
            else{
                n=temp+1;
            }

        }
        return ans;
        
        
    }
};