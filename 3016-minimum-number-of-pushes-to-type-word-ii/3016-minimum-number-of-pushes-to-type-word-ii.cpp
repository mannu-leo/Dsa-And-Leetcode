class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int freq[26]={0};
        for(auto i:word){
            freq[i-'a']++;
        }
        int ans=0;
        sort(freq,freq+26,greater<int>());
        for(int i=0;i<26;i++){
            if(freq[i]>=1&&i<8){
                ans+=freq[i]*1;
            }
            else if(freq[i]>=1&&i<16){
                ans+=freq[i]*2;
            }
            else if(freq[i]>=1&&i<24&&i>=16){
                ans+=freq[i]*3;

            }
            else if(freq[i]>=1&&i>=24&&i<26){
                ans+=freq[i]*4;
            }
        }
        return ans;

        
    }
};