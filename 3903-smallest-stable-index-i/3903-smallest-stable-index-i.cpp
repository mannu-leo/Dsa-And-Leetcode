class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int diff=0;
        int ans=-1;
        for(int i=0;i<n;i++){
            int maxx=*max_element(nums.begin(),nums.begin()+i+1);
            int minn=*min_element(nums.begin()+i,nums.end());
            int diff=maxx-minn;
            if(diff<=k){
                ans=i;
                break;
            }

        }
        return ans;
        
    }
};