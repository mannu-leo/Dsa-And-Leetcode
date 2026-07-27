class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26){
            return false;
        }
        vector<int>freq(26,0);
        for(auto i:sentence){
            char ch=i;
            freq[ch-'a']=1;
        }
        for(auto j:freq){
            if(j==0){
                return false;
            }
        }
        return true;
    }
};