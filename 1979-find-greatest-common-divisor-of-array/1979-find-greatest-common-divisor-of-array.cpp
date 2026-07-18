class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int small=INT_MAX;
        int large=INT_MIN;
        for(int i=0;i<n;i++){
            small=min(nums[i],small);
            large=max(nums[i],large);
            
        }
        return gcd(small,large);
        
    }
};