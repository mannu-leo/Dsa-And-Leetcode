class Solution {
public:
    int maximum69Number (int num) {
        vector<int>arr;
        while(num!=0){
            int rem=num%10;
            arr.push_back(rem);
            num=num/10;
        }
        reverse(arr.begin(),arr.end());
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==9){
                continue;
            }
            else{
                count++;
                if(count<=1){
                    arr[i]=9;
                }
                else{
                    break;
                }
            }
            
            
                
        }
        int ans=0;
        for(auto i:arr){
            ans=ans*10+i;
        }
        return ans;

        
    }
};