 class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>set1;
        unordered_set<int>set;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int ans=nums[i]^nums[j];
                set.insert(ans);
            }
        }
        for(auto i:set){
            for(int k=0;k<n;k++){
                int ans=i^nums[k];
                set1.insert(ans);
            }
        }
        return set1.size();
    }
};