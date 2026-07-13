class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        if(s.size()!=goal.size()){
            return false;
        }
        if(s==goal){
            return true;
        }
        // int j=0;
        // char temp;
        // while(j<n){
        //     temp=s[0];
        //     for(int i=1;i<n;i++){
        //         s[i-1]=s[i];
        //     }
        //     j++;
        //     s[n-1]=temp;
        //     if(s==goal){
        //         return true;
        //     }
        // }
        // return false;o(nxn) approach
        string temp=s+s;//we concadenate the string so that all the combination will be made up
        return temp.find(goal)!=string::npos;//check whether the goal is in temp or not
        
    }
};