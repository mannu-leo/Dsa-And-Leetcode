class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int mid=n/2;
        int elem=nums[mid];
        if(mp[elem]>1){
            return false;
        }
        return true;
        
    }
};