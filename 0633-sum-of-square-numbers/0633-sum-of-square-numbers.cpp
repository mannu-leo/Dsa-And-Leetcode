class Solution {
public:

    bool judgeSquareSum(int c) {
        for(int i=0;i<=sqrt(c);i++){
            long long a=1LL*i*i;
            int low=i;
            int high=c;
            while(low<=high){
                long long mid =low+(high-low)/2;
                if(mid*mid==c-a){
                    return true;
                }
                else if(mid*mid>c-a){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                    
                }
            }
            
        }        
        return false;
        
    }
};