class Solution {
public:
    int expand(string s,int left,int right){
        int count=0;
        int n=s.size();
        while(left>=0&&right<n&&s[left]==s[right]){
            left--;
            right++;
            count++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            count+=expand(s,i,i);
            count+=expand(s,i,i+1);

        }
        return count;

    }
};