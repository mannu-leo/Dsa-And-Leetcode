class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string temp="";
        vector<string>words;
        int i=0;
        while(i<n){
            if(s[i]==' '){
                i++;
            }
            while(i<n&&s[i]!=' '){
                temp+=s[i];
                i++;
            }
            if(!temp.empty()){
                words.push_back(temp);
                temp="";

            }
        }
        string ans="";
        reverse(words.begin(),words.end());
        for(int i=0;i<words.size();i++){
            ans+=words[i];
            if(i!=words.size()-1){
                ans+=' ';
            }
        }
        return ans;
        
    }
};