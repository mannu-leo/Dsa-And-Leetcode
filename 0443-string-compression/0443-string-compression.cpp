class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int count=0;
        int index=0;
        int i=0;
        while(i<n){
            char curr=chars[i];
            count=0;
            while(i<n&&chars[i]==curr){
                count++;
                i++;
            }
            chars[index++]=curr;
            if(count>1){
                string str=to_string(count);
                for(int j=0;j<str.size();j++){
                    chars[index]=str[j];
                    index++;
                }

            }
            

        }
        return index;
    }
};