class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        unordered_map<char,char>mp;
        unordered_map<char,char>mp1;
        for(int i=0;i<n;i++){
            char ch1=s[i];
            char ch2=t[i];
            if(mp.find(ch1)!=mp.end()){
                if(mp[ch1]!=ch2){
                    return false;
                }
            }
            if(mp1.find(ch2)!=mp.end()){
                if(mp1[ch2]!=ch1){
                    return false;
                }
            }
            mp[ch1]=ch2;
            mp1[ch2]=ch1;

        }
        return true;

        
    }
};