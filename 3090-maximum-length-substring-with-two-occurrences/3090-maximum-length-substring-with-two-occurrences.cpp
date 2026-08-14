class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        vector<int>freq(26,0);
        int left=0;
        int right=0;
        int len=0;
        for(int right=0;right<n;right++){
            char ch=s[right];
            freq[ch-'a']++;
            while (freq[s[right] - 'a'] > 2) {
                freq[s[left] - 'a']--;
                left++;
            }
            len=max(len,right-left+1);

        }
        return len;
        
    }
};