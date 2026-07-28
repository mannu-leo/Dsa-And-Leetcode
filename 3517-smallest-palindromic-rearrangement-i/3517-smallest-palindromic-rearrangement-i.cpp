class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        if(n==1){
            return s;
        }
        vector<int>freq(26); 
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        string left="";
        string middle="";
        for(int i=0;i<26;i++){
            char ch='a'+i;
            if(freq[i]%2!=0){
                middle+=ch;
            }
            int count=freq[i]/2;
            while(count!=0){
                left+=ch;
                count--;
            }
        }
        string right=left;
        reverse(right.begin(),right.end());
        return left+middle+right; 
    }
    
};