class Solution {
public:
    int upper_count(string word){
        int count=0;
        for(auto i:word){
            
            if(i>='A'&&i<='Z'){
                count++;
            }
           
        }
        return count;
    }
    bool detectCapitalUse(string word) {
        int n=word.size();
        int occ=upper_count(word);
        if(occ==n){
            return true;
        }
        else if(occ==0){
            return true;
        }
        else if(occ==1&&(isupper(word[0]))){
            return true;

        }
        return false;
        
    }
};