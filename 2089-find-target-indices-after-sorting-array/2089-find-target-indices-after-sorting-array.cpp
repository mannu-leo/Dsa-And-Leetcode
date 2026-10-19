class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int less=0;
        int great=0;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>target){
                great++;
            }
            else if(nums[i]<target){
                less++;
            }
        }
        int n=nums.size()-great-less;
        for(int i=0;i<n;i++){
            res.push_back(i+less);
        }
        return res;
        
    }
};