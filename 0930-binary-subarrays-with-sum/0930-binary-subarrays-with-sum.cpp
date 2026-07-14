class Solution {
public:
    long long countoccurance(vector<int>&nums, int goal){
        int n= nums.size();
        int sum=0;
        long long count=0;
        int l=0;
        int r=0;
        if(goal<0){
            return 0;
        }
        while(r<n){
            sum+=nums[r];
            while(sum>goal){
                sum-=nums[l];
                l++;
            }
            count=count+(r-l+1);
            r++;
        }
    return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return countoccurance(nums,goal)-countoccurance(nums,goal-1);
    }
};