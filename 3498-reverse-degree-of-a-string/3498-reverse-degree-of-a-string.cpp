class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            char ch=s[i];
            int letter='z'-ch+1;
            int product=letter*(i+1);
            sum+=product;
        }
        return sum;
        
    }
};