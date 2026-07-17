class Solution {
public:
    int countPrimes(int n) {
        if(n==0){
            return 0;
        }
        if(n==1){
            return 0;
        }
        int count=0;
        vector<int>check(n,0);
        for(int i=2;i<n;i++){
            if(check[i]!=0){
                continue;
            }
            else{
                count++;
            }
            for (long long j = 1LL * i * i; j < n; j += i) {
                check[j] = 1;
            }
            // long long x=0;
            // int j=2;
            // while(x<n){
            //     x=1LL*j*i; //this check all the multiple
            //     if(x>=n){
            //         break;
            //     }
            //     check[x]=1;
            //     j++;
            // }
        }
        return count;
        
    }
};