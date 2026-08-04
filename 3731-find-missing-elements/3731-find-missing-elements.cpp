class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxx=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=mini;i<=maxx;i++){
            int flag=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i){
                    flag=1;
                    break;
                }

            }
            if(flag==0){
                ans.push_back(i);
            }
            
        }
        sort(ans.begin(),ans.end());
        return ans;


    }
};