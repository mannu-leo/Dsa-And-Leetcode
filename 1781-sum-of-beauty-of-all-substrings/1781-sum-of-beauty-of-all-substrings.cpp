class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int freq[26]={0};
            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;
                int maxx=0;
                int mini=INT_MAX;
                for(int k=0;k<26;k++){
                    if(freq[k]>0){
                        maxx=max(maxx,freq[k]);
                        mini=min(mini,freq[k]);
                    }
                    
                }
                ans+=maxx-mini; 
            }
        }
        return ans;

        
        
    }
};