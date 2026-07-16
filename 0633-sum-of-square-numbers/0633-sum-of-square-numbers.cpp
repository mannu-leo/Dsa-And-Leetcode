class Solution {
public:
    bool judgeSquareSum(int c) {
        // for(int i=0;i<=sqrt(c);i++){
        //     long long a=i*i;
        //     int low=i;
        //     int high=c;
        //     while(low<=high){
        //         long long mid =low+(high-low)/2;
        //         if(mid*mid==c-a){
        //             return true;
        //         }
        //         else if(mid*mid>c-a){
        //             high=mid-1;
        //         }
        //         else{
        //             low=mid+1;
                    
        //         }
        //     }
            
        // }        
        // return false;O(nlogn)
        long long a=0;
        long long b=sqrt(c);
        long long sum;
        while(a<=b){
            sum=a*a+b*b;
            if(sum==c){
                return true;
            }
            else if(sum>c){
                b--;
            }
            else{
                a++;
            }

        }
        return false;
    }
};