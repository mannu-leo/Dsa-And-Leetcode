class Solution {
public:
    string pallindrome(string s,int left,int right){
        int maxlen=0;
        int start=0;
        while(left>=0&&right<s.size()&&s[left]==s[right]){
            if(right-left+1>maxlen){
                start=left;
                maxlen=right-left+1;
            }
            left--;
            right++;
        }
        return s.substr(start,maxlen);
    }
    string longestPalindrome(string s) {
        int n=s.size();
        int maxlen=0;
        int start=0;
        string ans;
        for(int i=0;i<n;i++){
            int left=i;
            int right=i+1;
            string s1=pallindrome(s,i,i);
            string s2=pallindrome(s,i,i+1);
            if(s1.size()>maxlen){
                ans=s1;
                maxlen=s1.size();
            }
            if(s2.size()>maxlen){
                ans=s2;
                maxlen=s2.size();
            }     
            
        }
        return ans;
        
    }
};