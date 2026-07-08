class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int sum=0;
        int count=0;
        int curr=0;
        for(int i=0;i<nums.size();i++){
            curr+=nums[i];
            if(curr==k){//we can do mp[0]=1 to reduce  this also
                count++;
            }
            if(mp.count(curr-k)){
                count+=mp[curr-k];
            }
            mp[curr]++;
            
        }
        return count;
    }
};