class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        int len=1;
        for(int len=1;len<=n/2;len++){
            if(n%len==0){
                int i=0;
                while(i<n&&s[i]==s[i%len]){
                    i++;
                    
                }
                if(i==n){
                    return true;
                }
            }
        }
        return false;
    }
};