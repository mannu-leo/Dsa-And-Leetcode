class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int maxx=-1;
        if(k==1){
            for(int i=0;i<n;i++){
                if(mp[nums[i]]==1){
                    maxx=max(maxx,nums[i]);
                }
            }
            return maxx;
        }
        if(k==n){
            int mx=*max_element(nums.begin(),nums.end());
            return mx;
        }
        int n1=nums[0];
        int n1_occ=0;
        int n2=nums[n-1];
        int n2_occ=0;
        for(int i=0;i<nums.size();i++){
            if(n1==nums[i]){
                n1_occ+=1;
            }
            if(n2==nums[i]){
                n2_occ+=1;
            }
        }
        if(n1_occ==1&&n2_occ==1){
            int ans=max(n1,n2);
            return ans;
        }
        if(n1_occ>1&&n2_occ==1){
            return n2;
        }
        if(n2_occ>1&&n1_occ==1){
            return n1;
        }
        return -1;
    }
};