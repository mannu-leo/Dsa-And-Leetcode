class Solution {
public:
    string palindrome(string s,int left,int right){
        int start=0;
        int maxlen=0;
        while(left>=0&&right<s.size()&&s[left]==s[right]){
            if(right-left+1>maxlen){
                maxlen=right-left+1;
                start=left;
            }
            left--;
            right++;
        }
        return s.substr(start,maxlen);
    }
    string longestPalindrome(string s) {
        int n=s.size();
        string ans;
        for(int i=0;i<n;i++){
            string s1=palindrome(s,i,i);
            string s2=palindrome(s,i,i+1);
            if(s1.size()>ans.size()){
                ans=s1;
            }
            if(s2.size()>ans.size()){
                ans=s2;
            }

        }
        return ans;       
    }
};