class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int sign=1;
        long long ans=0;
        int i=0;
        
        while(i<n&&s[i]==' '){
            i++;
        }
        if(i==n){return 0;}
        if(s[i]=='-'){
            sign=-1;
            i++;

        }
        else if(s[i]=='+'){
            sign=1;
            i++;
        }
        long long limit;

        if(sign == 1)
            limit = INT_MAX;
        else{
            limit = 2147483648LL;
        }
            
        while(i < n && isdigit(s[i])) {
        int digit = s[i] - '0';

        if(ans > (limit - digit) / 10) {
                if(sign == 1) {
                    return INT_MAX;
                }
                else {
                    return INT_MIN;
                }
            }
            else {
                ans = ans * 10 + digit;
                i++;
            }
        }    
        if(ans*sign>INT_MAX){
                return INT_MAX;
            }
        if(ans*sign<INT_MIN){
                return INT_MIN;
            }
        return ans*sign;
    }        

};